# Real Time Mimic Robotic Hand

This project features a robotic hand controlled by five stepper motors, each corresponding to a finger. The system takes input from an object detection model powered by TensorFlow, which uses OpenCV and a webcam for real-time gesture recognition. The STM32 microcontroller handles precise motor control via PWM, while the ESP32 facilitates Bluetooth communication with a laptop that runs the object detection model. The robotic hand itself was designed in SolidWorks and 3D printed for flexibility and precision in mimicking human gestures.

## Features

- **Stepper Motor Control**: Each finger is driven by an individual stepper motor for realistic movement.
- **Object Detection**: Utilizes TensorFlow with OpenCV to detect and mimic hand gestures.
- **Bluetooth Communication**: The ESP32 handles communication between the STM32 and the laptop running the gesture recognition.
- **Real-Time Control**: The STM32 synchronizes the movement of the motors based on real-time gesture state input.
- **CAD Design**: The robotic hand components were modeled in SolidWorks and 3D printed.

## Components

- **STM32**: Manages motor control and real-time synchronization.
- **ESP32**: Facilitates Bluetooth communication between the laptop and the STM32.
- **Stepper Motors**: Control individual finger movements.
- **Laptop with TensorFlow & OpenCV**: Runs the object detection model and sends states to the ESP32.
- **3D Printed Hand**: The physical robotic hand designed in SolidWorks.

## Installation

1. Clone the repository:

    ```bash
    git clone https://github.com/TharunGaneshram/Real-Time_Mimic_Robotic_Hand.git
    ```

2. Set up the hardware components as described in the project.

3. Flash the ESP32 and STM32 with the provided firmware.

## Usage

1. Pair the ESP32 with your Bluetooth device (laptop running TensorFlow and OpenCV).
2. Run the object detection model on the laptop to detect hand gestures.
3. The STM32 will control the stepper motors in real time to mimic the detected gestures.
