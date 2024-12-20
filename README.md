# Building a Smart Home Device with Arduino 
## Problem and Objective
The project addressed the challenge of remotely and wirelessly controlling home 
lighting using a smartphone. By integrating a Bluetooth module with an Arduino board 
and a relay, the device allows users to turn a bulb on or off without physically 
interacting with a switch. This solution enhances convenience and energy efficiency, 
offering a practical approach to home automation. It is particularly beneficial for 
individuals with mobility challenges and anyone interested in smart home technology, 
demonstrating how simple components can be used to create effective and 
accessible automation solutions. 

## Introduction
This project aims to build a smart home device that controls a bulb using an 
Arduino board, an HC-06 Bluetooth module, and a relay. This setup allows wireless control 
of the bulb via a smartphone. 

## Materials
- Arduino board 
- HC-06 Bluetooth module 
- Relay module 
- Light bulb 
- Jumper wires 
- Smartphone with Bluetooth capability 
- Arduino IDE 

## Step-by-Step Process 
1. Setup the Arduino Board: Connect the Arduino board to your computer using a USB 
cable and open the Arduino IDE. 
2. Wiring the Components Directly: 
  - Connect the HC-06 Bluetooth module to the Arduino: 
     - VCC to 5V
     - GND to GND
     - TX to RX
     - RX to TX 
  - Connect the relay module to the Arduino:
     - VCC to 5V
     - GND to GND
     - IN pin to digital pin 8 
  - Connect the bulb to the relay module following safety precautions. 
3. Coding: 
  - Write a program to establish communication between the Arduino and the 
Bluetooth module. 
  - Include functions to control the relay based on Bluetooth signals. 
  - Upload the code to the Arduino board using the Arduino IDE. 
4. Testing: 
  - Pair the HC-06 Bluetooth module with your smartphone. 
  - Use a Bluetooth terminal app on your phone to send commands ('1' to turn on the 
bulb and '0' to turn it off). 
  - Observe the bulb responding to the commands.