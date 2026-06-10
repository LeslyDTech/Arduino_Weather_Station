# Arduino Weather Station

A simple weather station that displays real-time temperature and humidity on a 16x2 LCD using a DHT11 sensor and Arduino Uno R3.

## Demo
Check out the build video on TikTok: [Watch here](https://www.tiktok.com/@leslydtech/photo/7636569640902184206?is_from_webapp=1&sender_device=pc)

## Hardware Required
- Arduino Uno R3
- DHT11 3-pin sensor module
- LCD 16x2
- Potentiometer
- Breadboard
- Jumper wires

## Wiring

### DHT11
| DHT11 Pin | Arduino |
|-----------|---------|
| + | 5V |
| S | Pin 8 |
| - | GND |

### LCD
| LCD Pin | Arduino |
|---------|---------|
| RS | Pin 11 |
| E | Pin 12 |
| D4 | Pin 2 |
| D5 | Pin 3 |
| D6 | Pin 4 |
| D7 | Pin 5 |
| V0 | Potentiometer wiper |
| VSS | GND |
| VDD | 5V |

## Libraries
- LiquidCrystal (built-in)
- DHT sensor library by Adafruit

## How to Install
1. Install Arduino IDE from arduino.cc
2. Install the DHT sensor library by Adafruit via Library Manager
3. Upload `weather_station.ino` to your Arduino Uno R3

## What it Does
- Displays temperature in Celsius on the first row
- Displays humidity percentage on the second row
- Refreshes every 2 seconds
