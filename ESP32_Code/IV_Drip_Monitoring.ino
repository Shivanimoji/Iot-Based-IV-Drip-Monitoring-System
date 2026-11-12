
#include "HX711.h"
#include <WiFi.h>
#include <HTTPClient.h>

// HX711 connections
#define HX711_DOUT 4
#define HX711_SCK  5

HX711 scale;

// Wi-Fi credentials - do not publish real credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

// Replace with your computer's local IPv4 address
const char* serverURL =
  "http://YOUR_PC_IP/iv_drip/receive.php";

// Calibration factor from your project report
float calibrationFactor = -720.032532;

unsigned long lastSend = 0;
const unsigned long sendInterval = 5000;

void setup() {
  Serial.begin(115200);

  scale.begin(HX711_DOUT, HX711_SCK);
  scale.set_scale(calibrationFactor);
  scale.tare();

  Serial.println("IV Drip Monitoring Started");

  WiFi.begin(ssid, password);
  Serial.print("Connecting to Wi-Fi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWi-Fi Connected");
  Serial.println(WiFi.localIP());
}

void loop() {
  if (!scale.is_ready()) {
    Serial.println("HX711 not ready");
    delay(1000);
    return;
  }

  // Read average weight in grams
  float weight = scale.get_units(10);

  if (weight < 0) {
    weight = 0;
  }

  Serial.print("IV Bottle Weight: ");
  Serial.print(weight);
  Serial.println(" grams");

  if (WiFi.status() == WL_CONNECTED &&
      millis() - lastSend >= sendInterval) {

    HTTPClient http;
    http.begin(serverURL);
    http.addHeader("Content-Type", "application/json");

    String payload = "{\"weight_g\":" +
                     String(weight, 2) + "}";

    int response = http.POST(payload);

    Serial.print("Server response: ");
    Serial.println(response);

    http.end();
    lastSend = millis();
  }

  delay(1000);
}
