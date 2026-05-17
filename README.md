#  Smart Rain Detector System using Arduino Nano

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Arduino](https://img.shields.io/badge/Arduino-Nano-blue)](https://www.arduino.cc/)
[![Platform](https://img.shields.io/badge/platform-Arduino-red)](https://www.arduino.cc/)

An **automatic rain detection system** that detects rainfall and triggers a servo motor to retract clothes while activating a buzzer alert. Built with Arduino Nano for smart home automation.

---

##  Table of Contents
- [Features](#features)
- [How It Works](#how-it-works)
- [Components Required](#components-required)
- [Circuit Diagram](#circuit-diagram)
- [Pin Connections](#pin-connections)
- [Arduino Code](#arduino-code)
- [Results](#results)
- [Real-Life Applications](#real-life-applications)
- [Advantages](#advantages)
- [Future Improvements](#future-improvements)
- [Author](#author)
- [License](#license)

---

##  Features

- ✅ Real-time rain detection using rain drop sensor
- ✅ Automatic clothes collection using servo motor
- ✅ Buzzer alert when rain starts
- ✅ Smooth servo movement (no sudden jerks)
- ✅ Low-cost and energy-efficient
- ✅ Expandable for IoT and AI

---

##  How It Works

1. The **rain sensor** detects water droplets on its surface.
2. The sensor output is processed by the **Arduino Nano**.
3. If rainfall is detected (sensor value drops below threshold):
   - Servo motor moves clothes rack to **safe position (0°)**.
   - Buzzer turns **ON** for 1 second to alert the user.
4. If no rain is detected:
   - Servo motor returns to **drying position (92°)**.
   - Buzzer remains **OFF**.
5. The system continuously monitors rainfall and takes action instantly.

---

##  Components Required

| Component | Quantity |
|-----------|----------|
| Arduino Nano | 1 |
| Rain Drop Sensor (with control module) | 1 |
| Servo Motor (SG90 / MG995) | 1 |
| Buzzer (5V) | 1 |
| Mini Breadboard | 1 |
| Jumper Wires (Male-to-Male & Male-to-Female) | As needed |
| Arduino Nano USB Cable | 1 |

---

##  Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

> *Circuit connections for Arduino Nano, rain sensor, servo motor, and buzzer*

---

##  Pin Connections

| Component | Pin (Arduino Nano) |
|-----------|--------------------|
| Rain Sensor – VCC | 5V |
| Rain Sensor – GND | GND |
| Rain Sensor – Analog Output | **D2** |
| Servo Motor – VCC (Red) | 5V |
| Servo Motor – GND (Brown) | GND |
| Servo Motor – Signal (Orange) | **D4** |
| Buzzer – Positive Terminal | **D3** |
| Buzzer – Negative Terminal | GND |

---

##  Arduino Code

The complete code is available in [`rain_detector.ino`](rain_detector.ino).

### Key Functions:
- `moveServoSmoothly()` – Moves servo gradually to avoid jerks.
- `digitalRead(rainSensorPin)` – Reads rain sensor status (`LOW` = rain detected).
- `digitalWrite(buzzerPin, HIGH)` – Activates buzzer.

