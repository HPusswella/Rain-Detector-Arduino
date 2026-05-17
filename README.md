# Smart Rain Detector System using Arduino Nano

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Arduino](https://img.shields.io/badge/Arduino-Nano-blue)](https://www.arduino.cc/)

An **automatic rain detection system** that detects rainfall and moves a clothes rack to a safe position using a servo motor, while activating a buzzer alert. Designed with Arduino Nano for smart home automation.

---

##  Table of Contents

- [Features](#features)
- [Components Required](#components-required)
- [Circuit Diagram](#circuit-diagram)
- [Code](#code)
- [Working Principle](#working-principle)
- [How to Use](#how-to-use)
- [Full Report](#full-report)
- [License](#license)

---

##  Features

- Real‑time rain detection using a rain drop sensor  
- Automatic clothes collection via servo motor  
- Audible buzzer alert when rain starts  
- Smooth servo movement (no sudden jerks)  
- Low‑cost and energy‑efficient  
- Expandable for IoT and AI

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

📎 **[View Circuit Diagram](circuit_diagram.png)** – opens in a new tab

> *The diagram shows connections for Arduino Nano, rain sensor, servo motor, and buzzer.*

---

##  Code

 **[`rain_detector.ino`](rain_detector.ino)** – Full Arduino code

Key functions:
- `moveServoSmoothly()` – Gradual servo movement (no jerks)
- `digitalRead(rainSensorPin)` – Reads rain status (`LOW` = rain detected)
- `digitalWrite(buzzerPin, HIGH)` – Activates buzzer for 1 second

---

##  Working Principle

1. The **rain sensor** detects water droplets on its surface → electrical resistance decreases.
2. The sensor module outputs a **digital LOW** signal on pin D2 of the Arduino Nano.
3. When rain is detected (`LOW`):
   - Buzzer (pin D3) sounds for **1 second**.
   - Servo motor (pin D4) moves smoothly from **92°** (drying position) to **0°** (covered position).
4. When rain stops (`HIGH`):
   - Servo returns smoothly from **0°** to **92°**.
   - Buzzer remains OFF.
5. A **100 ms delay** prevents false triggers from sensor noise.

---

##  How to Use

1. **Wiring** – Connect all components as shown in the [Circuit Diagram](#circuit-diagram).
2. **Upload Code** – Open `rain_detector.ino` in Arduino IDE, select **Arduino Nano** board, and upload.
3. **Power** – Connect USB cable or external 7–12V power to the Nano.
4. **Test** – Pour a few drops of water on the rain sensor. The servo should move, and buzzer should sound.
5. **Placement** – Mount the sensor where rain can fall on it. Attach a clothes rack to the servo arm.

---

##  Full Report

 **[Download Full Project Report (PDF)](Smart_Rain_Detector.pdf)** – Detailed documentation including abstract, introduction, results, references, etc.

---

##  License

This project is licensed under the **MIT License** – see the [LICENSE](LICENSE) file for details.

---

##  Author

**P.G.R.H.Pusswella**  
---

##  Acknowledgements

- [Arduino](https://www.arduino.cc/) – Servo library & documentation  
- [Last Minute Engineers](https://lastminuteengineers.com/) – Rain sensor interfacing guide  
- [ElectronicWings](https://www.electronicwings.com/) – Buzzer interfacing tutorial  

---

 *If this project helps you, please give it a star on GitHub!*
