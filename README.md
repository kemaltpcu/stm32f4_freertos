# STM32F4 Project - 0.91" 128*32 OLED Display with STM32F4 DISC Board, Button & UART2
## Project Description
This is an STM32F407 discovery based embedded project that interfaces with:

LEDs for visual indications

Button for user interaction

128x32 OLED Display (OLED-B V1.0) for output

UART2 Communication for serial data transmission

The project is developed using STM32CubeIDE and runs on an STM32F4 microcontroller.

## Hardware Components

* * Microcontroller: STM32F4

* * Display: 128x32 OLED-B V1.0

Communication: UART to USB Chip

## Installation & Usage

1. Clone the Repository
```
git clone https://github.com/kemaltpcu/stm32f4_freertos.git
cd your-repo
```
2. Build the Project

Open STM32CubeIDE and import the project. Compile and flash it onto the STM32F4 board.

3. Run the Project

Press the button to trigger actions.

Observe LED indications.

View messages on the OLED display.

Use UART2 for serial communication.
## Hardwre Connection
```
PA2 -> USART2_TX
PA3 -> USART2_RX
```