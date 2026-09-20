# rov_dht22_miniproj
ESP32-C3 DHT22 temperature and humidity project.

Audrey Zhang

project purpose: This project is an ESP32-C3 based device that reads live temperature and humidity values using a DHT22 sensor.

features:- Live temperature and humidity readings
- DHT22 sensor with digital output
- ESP32-C3 SuperMini microcontroller
- Serial Monitor output at 115200 baud
- Custom PCB designed in EasyEDA

components: 
- esp32-c3 supermini x1
- dht22 (3-pin) x1
- breadboard x1
- jumper wires x3
- usb-c cable x1

wiring/pin list:
VCC - 3V3
DATA - GPI04
GND - GND

How to use:
1. Power the device via the USB-C port .
2. Open the Arduino Serial Monitor at **115200 baud**.
3. Live temperature and humidity readings update every 2 seconds.

Self reflection:
My contribution to this project was soldering the ESP32-C3 SuperMini headers, wiring the DHT22 sensor,and designing the PCB in EasyEDA. I learned how the DHT22 communicates with the ESP32 using a digital signal, and how to design a simple PCB schematic and layout. A challenge I faced was getting the Wi-Fi dashboard to work — the webpage would not load even after connecting to my phone's hotspot. I addressed this by focusing on the working Serial Monitor output instead.I made my design reliable by testing the sensor with breath and warmth, and checking for solder bridges. If I had more time, I would continue to work on the Wi-Fi and add more features.
