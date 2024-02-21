# ESP32 Blinking LED Example

This is a simple example project for ESP32 using the ESP-IDF framework to blink an LED connected to GPIO pin 2.

## Prerequisites

Before you begin, ensure you have the following:

- [ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/) installed on your development environment.
- An ESP32 development board.

## Getting Started

1. Clone this repository:

    ```bash
    git clone https://github.com/Builtfor-developers/ESP32-IDF-BLINKING-PROJECT.git
    ```

2. Change directory to the project folder:

    ```bash
    cd ESP32-IDF-BLINKING-PROJECT
    ```

3. Build the project:

    ```bash
    idf.py build
    ```

4. Flash the firmware to your ESP32:

    ```bash
    idf.py -p (PORT) flash
    ```

    Replace `(PORT)` with your ESP32's serial port.

5. Monitor the output:

    ```bash
    idf.py -p (PORT) monitor
    ```

    You should see the "Hello World" message and observe the LED blinking.

## Project Structure

- `main/` - Contains the main application code.
  - `main.c` - The main application source file.

