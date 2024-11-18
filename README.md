# **Bluetooth-Controlled RC Car**  

## **Introduction**  
This project involves building a remote-controlled car that operates via a smartphone using the HC-05 Bluetooth module. The system features an H-bridge motor driver to enable dual-direction motor control, allowing precise movements such as forward, reverse, left, and right. The car operates within the typical range of Bluetooth devices, providing wireless convenience and ease of use.  

The project demonstrates the integration of Bluetooth technology with motor control systems, making it an excellent platform for learning and experimenting with wireless communication and embedded systems.  

---

## **Requirements**  
To build this Bluetooth-controlled car, you will need the following components:  
1. **Hardware:**  
   - HC-05 Bluetooth module  
   - H-bridge motor driver (e.g., L298N or L293D)  
   - ESP8266 (or any other compatible microcontroller)  
   - DC motors (2 or 4, depending on design)  
   - Wheels  
   - Chassis  
   - Power supply (e.g., batteries)  
   - Jumper wires and connectors  

2. **Software:**  
   - Arduino IDE  
   - <a href="https://github.com/UtpalKuma-r/Bluetooth-Controlled-RC-Car/blob/main/Bluetooth%20RC%20Controller.apk">Bluetooth terminal app (for smartphone control)</a>  

---

## **Circuit Diagram**  
The circuit diagram illustrates the connections between the HC-05 module, the motor driver, and the Arduino. The HC-05 communicates wirelessly with a smartphone and sends commands to the Arduino, which controls the motor driver to operate the motors.  

![image](https://github.com/user-attachments/assets/6f29743c-fe04-4dcd-8cad-4e0880984192)  


### **ESP8266 to L298N** 

| ESP8266 | Motor Driver | 
|---------|--------------|
| D5      | IN4          | 
| D6      | IN3          | 
| D7      | IN2          |
| D8      | IN1          |
| VIN     | 5V           |
| GND     | GND          |


### **ESP8266 to HC-05** 

| ESP8266 | hc-05        | 
|---------|--------------|
| 3V      | 3V           | 
| GND     | GND          | 
| RX      | TX           |
| TX      | RX           |

---

## **Motor Driver Control Truth Table**  

The truth table for the H-bridge motor driver is as follows:  

| IN 1    | IN 2    | IN 3    | IN 4    | Motor Action |  
|---------|---------|---------|---------|--------------|  
| LOW     | HIGH    | HIGH    | LOW     | Forward      |  
| HIGH    | LOW     | LOW     | HIGH    | Back         |   
| LOW     | HIGH    | LOW     | HIGH    | Left         | 
| HIGH    | LOW     | HIGH    | LOW     | Right        |
| LOW     | LOW     | LOW     | LOW     | Stop         | 

This table applies to each motor channel. By controlling the inputs to the H-bridge, you can achieve the desired movement of the car.  

---

## **Gallery**  

![WhatsApp Image 2024-11-17 at 12 40 51_da5b2011](https://github.com/user-attachments/assets/955aec87-b41c-45bc-982d-3985c657915e)

![Untitled video - Made with Clipchamp](https://github.com/user-attachments/assets/4522f9e7-eb47-4c6f-8c81-61c1aafb275b)


---

## **Future Scope**  
This project has the potential for further enhancements, including:  
1. **Increased Range:** Replace the HC-05 with a longer-range wireless communication module like NRF24L01 or Wi-Fi.  
2. **Obstacle Avoidance:** Integrate sensors (e.g., ultrasonic or infrared) for autonomous navigation.  
3. **Speed Control:** Implement PWM (Pulse Width Modulation) for variable motor speed.  
4. **GPS Integration:** Add GPS modules for location tracking and autonomous path planning.  
5. **Camera Module:** Enable live video streaming for remote monitoring and control.  
6. **Voice Control:** Integrate voice command functionality for hands-free operation.  

This project lays a strong foundation for learning and experimenting with robotics, wireless communication, and embedded systems, offering limitless possibilities for innovation.  
