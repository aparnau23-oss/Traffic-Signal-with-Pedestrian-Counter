# Traffic-Signal-with-Pedestrian-Counter


This project is an Arduino-based traffic light system that simulates a pedestrian crossing. A push button is used to request a pedestrian crossing, while a 16×2 LCD displays the total number of pedestrian requests.

## Features

- 🚦 Automatic traffic light sequence
- 🔘 Push-button pedestrian request
- 📟 16×2 LCD pedestrian counter
- 🟢 Green → 🟡 Yellow → 🔴 Red → 🟡 Yellow → 🟢 Green sequence
- 🔢 Displays the total number of pedestrian crossings

## Components Used

- Arduino Uno
- 16×2 LCD Display
- Red LED
- Yellow LED
- Green LED
- Push Button
- 3 × 220 Ω Resistors
- Breadboard and Jumper Wires

## Pin Connections

| Component | Arduino Pin |
|-----------|-------------|
| Red LED | D4 |
| Yellow LED | D9 |
| Green LED | D10 |
| Push Button | D6 |

## Software

- Arduino IDE
- Adafruit LiquidCrystal Library
- Tinkercad (Simulation)

## How It Works

The system starts with the green LED ON. When the push button is pressed, the pedestrian count increases and is displayed on the LCD. The traffic lights then follow the sequence from green to yellow, red, yellow, and back to green before waiting for the next pedestrian request.

## License

This project is intended for educational and learning purposes.
