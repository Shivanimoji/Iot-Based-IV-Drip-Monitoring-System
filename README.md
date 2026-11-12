# IoT-Based Intravenous Drip Monitoring System

## Project Overview
The IoT-Based Intravenous (IV) Drip Monitoring System is designed to automate the monitoring of IV fluid levels in healthcare environments. It uses an ESP32 microcontroller, a Load Cell sensor and an HX711 ADC module to continuously measure the weight of IV fluid.

The collected data is transmitted through Wi-Fi to a web-based monitoring dashboard, where healthcare staff can view fluid levels and receive alerts when the fluid reaches a predefined threshold.

## Problem Statement
Traditional IV drip monitoring depends on manual observation by nursing staff. This can lead to delayed detection of low fluid levels, increased workload and potential patient safety risks. This project aims to provide real-time monitoring and timely alerts through IoT technology.

## Objectives
- Monitor IV fluid weight continuously.
- Measure weight using a Load Cell and HX711 ADC.
- Transmit sensor data wirelessly using ESP32.
- Display real-time information on a web dashboard.
- Generate audio and visual alerts when predefined thresholds are reached.

## Technologies Used

**Hardware**
- ESP32 Microcontroller
- 1 kg Load Cell Sensor
- HX711 ADC Module
- Power Supply

**Software**
- Arduino IDE
- C/C++
- PHP
- MySQL
- XAMPP
- HTML
- CSS
- JavaScript
- Bootstrap 5

## System Architecture
The system consists of a sensor-based hardware unit and a web-based monitoring interface.

1. The Load Cell measures the weight of the IV fluid bottle.
2. The HX711 amplifies and converts the sensor signal into digital data.
3. The ESP32 processes the measurements.
4. The ESP32 transmits data wirelessly through Wi-Fi.
5. The backend processes and stores the readings.
6. The web dashboard displays fluid weight and remaining fluid percentage.
7. Audio and visual alerts are activated when the fluid reaches the configured threshold.

## Key Features
- Real-time IV fluid weight monitoring.
- Wireless data transmission using ESP32.
- Sensor calibration and weight measurement.
- Patient and IV parameter entry.
- Customizable threshold settings.
- Live web dashboard visualization.
- Audio and visual alert notifications.
- Alert acknowledgement through the dashboard.

## Hardware Components
- ESP32
- Load Cell (1 kg)
- HX711 ADC
- Power Supply

## Software Requirements
- Arduino IDE
- ESP32 Board Support
- XAMPP Server
- Apache
- PHP
- MySQL
- Web Browser

## Expected Applications
- Hospital wards
- Intensive Care Units (ICUs)
- Healthcare monitoring environments
- Home healthcare monitoring

## Future Enhancements
- Mobile application integration.
- SMS and push notifications.
- Integration with hospital management systems.
- Advanced patient monitoring features.
- Improved remote monitoring capabilities.

## Project Information
- Project Type: Academic Major Project
- Department: Electronics and Communication Engineering
- Institution: K S School of Engineering and Management (KSSEM)
- Academic Year: 2025–2026

## Disclaimer
This project is an academic prototype and is not certified for clinical use.

## Author
Developed as an academic project by the ECE project team.

