# smart-parking-system-esp32
Smart Parking System using ESP32 and Ultrasonic Sensor
# 🚗 Smart Parking System using ESP32

## 📌 Overview
The Smart Parking System is an embedded system project developed using the ESP32 microcontroller and an ultrasonic sensor to detect real-time parking slot availability.  
The system identifies whether a parking slot is **occupied or available** and indicates the status using LEDs. This project demonstrates core embedded systems concepts such as sensor interfacing, GPIO control, and real-time decision logic.

---

## 🎯 Objectives
- To design a low-cost smart parking solution
- To detect vehicle presence using distance measurement
- To indicate parking slot availability in real time
- To build a scalable base for future IoT integration

---

## 🧠 Working Principle
1. The ESP32 triggers the ultrasonic sensor to emit sound waves  
2. The waves reflect back from an object (vehicle)  
3. ESP32 measures the echo return time  
4. Distance is calculated using the speed of sound  
5. If distance is below a threshold, the slot is marked **occupied**  
6. LED indicators show the parking status  

---

## 🛠️ Hardware Components
- ESP32 Development Board  
- HC-SR04 Ultrasonic Sensor  
- Red LED (Slot Occupied)  
- Green LED (Slot Available)  
- 220Ω Resistors  
- Breadboard  
- Jumper Wires  
- USB Cable  

---

## 💻 Software Tools
- Arduino IDE  
- ESP32 Board Package  
- Embedded C / C++  
- Serial Monitor for debugging  

---

## 🔌 Pin Configuration

### Ultrasonic Sensor (HC-SR04 → ESP32)

| HC-SR04 Pin | ESP32 Pin |
|------------|-----------|
| VCC | 5V |
| GND | GND |
| TRIG | GPIO 5 |
| ECHO | GPIO 18 |

### LED Connections

| Indicator | ESP32 Pin |
|---------|-----------|
| Green LED (Available) | GPIO 2 |
| Red LED (Occupied) | GPIO 4 |

---

## ⚙️ Algorithm
1. Initialize ESP32 GPIO and serial communication  
2. Trigger ultrasonic sensor  
3. Measure echo pulse duration  
4. Calculate distance in centimeters  
5. Compare distance with threshold value  
6. Update LED status accordingly  
7. Repeat continuously  

---

## 📂 Repository Structure
smart-parking-system-esp32/
│
├── firmware/
│ └── esp32_arduino/
│ └── smart_parking.ino
│
├── hardware/
│ ├── circuit_diagram.png
│ └── components_list.md
│
├── docs/
│ └── project_overview.md
│
├── images/
│ └── setup_photo.jpg
│
└── README.md

yaml
Copy code

---

## ✅ Features
- Real-time parking slot detection  
- Simple and reliable logic  
- Low power consumption  
- Easy to scale for multiple slots  
- Internship and resume ready  

---

## ⚠️ Limitations
- Supports only a single parking slot in the current version  
- Ultrasonic sensor accuracy depends on environment  
- No cloud or mobile application integration yet  

---

## 🚀 Future Enhancements
- Multi-slot parking system  
- Wi-Fi based IoT dashboard  
- Mobile application integration  
- Cloud data storage  
- Camera-based vehicle detection  

---

## 🎓 Applications
- Shopping malls  
- Office complexes  
- Smart cities  
- Residential parking areas  

---

## 🧑‍💻 Author
**Hemant**  
Electronics & Telecommunication Engineering  
Embedded Systems Enthusiast  

---

## 📜 License
This project is licensed under the MIT License.
