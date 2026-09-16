# Auto Clothes Retractor V2
![Status](https://img.shields.io/badge/status-active-brightgreen)

![License](https://img.shields.io/badge/license-MIT-blue)

## Overview
An automatic system that retracts the laundry line as soon as rain is detected.

## About
- **Problem it solves:** Laundry left outside gets soaked if it rains while no one is around to bring it in.
- **Why I built it:** Combine a rain sensor with a servo motor to automate a simple, everyday household task.

## Key Features
- 🌧️ YL-69 rain sensor continuously monitors moisture on pin A0
- ⚙️ SG90 servo motor winds the line in when rain is detected (< 400 threshold) and returns it to the "out" position in dry weather
- 🔁 Fully automatic — no manual intervention needed

## Hardware / Bill of Materials
| No | Component | Qty | Role |
|----|-----------|-----|------|
| 01 | Arduino Uno R3 | 1 | Brain |
| 02 | YL-69 rain sensor + module | 1 | Rain detection |
| 03 | SG90 180° servo motor | 1 | Retracts/extends the line |
| 04 | Dupont wires + 5V power supply | — | Wiring & power |

## Tech Stack
`Arduino` `C++`

## Code
→ [View source code](auto_clothes.ino)

## Files
- `auto_clothes.ino`: complete Arduino code
- `schema_montage.jpg`: wiring diagram (to be added after assembly)

## Operation
1. Sensor measures moisture on pin A0
2. If value < 400 → rain detected
3. Servo rotates to 180° to wind the line in
4. Dry weather → servo returns to 0°

## Installation
1. Clone the repo
   ```bash
   git clone https://github.com/Roland13-ai/auto-clothes-retractor-v2.git
Flash the code — open auto_clothes.ino in Arduino IDE and upload
Wire it up — connect the YL-69 sensor to A0 and the SG90 servo to pin 9
Status
[x] Core logic written and functional
[ ] Wiring diagram (schema_montage.jpg) to be added after physical assembly
Author
Roland Ulrich Sèdjro SOHO
