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

---

##  Circuit Diagram

 **[View Circuit Diagram](circuit_diagram.png)** 

---

##  Code

**Click here:** [`rain_detector.ino`](rain_detector.ino) – Full Arduino code  

---

##  Working Principle

1. Rain sensor detects water → resistance decreases → Arduino reads **LOW** on pin D2.
2. When rain is detected:
   - Buzzer (D3) sounds for **1 second**.
   - Servo (D4) moves from **92° → 0°** (smooth).
3. When rain stops:
   - Servo returns **0° → 92°**.
   - Buzzer OFF.
4. 100 ms delay prevents false triggers.

---

##  How to Use

1. **Wiring** – Follow the [Circuit Diagram](#circuit-diagram).
2. **Upload Code** – Download `rain_detector.ino` and open in Arduino IDE. Select **Arduino Nano** board, then upload.
3. **Power** – Connect USB or external 7–12V.
4. **Test** – Drop water on the sensor; servo should move, buzzer should sound.
5. **Placement** – Mount sensor where rain can reach it; attach clothes rack to servo arm.

---

## Full Report

📎 **[Download Full Project Report (PDF)](Smart_Rain_Detector.pdf)** – Complete documentation with abstract, results, references.

---

##  License

This project is licensed under the **MIT License** – see the [LICENSE](LICENSE) file.

---

