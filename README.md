# STM32_Dust_Sensor
STM32 Blue Pill (Arduino IDE) program for ZH03B Laser Dust Sensor and Serial Monitor Application (works for non-authentic STM32 Blue Pill)

**!!! DISCLAIMER: The Particle Sensor module I was working with seemed to be faulty so I could never get any readings out of it. Any feedback would be appreciated. !!!**

Prerequisites:
  - STM32 Blue Pill
  - ST-LINK/V2
  - USB-TTL Adapter
  - Winsen ZH03B Laser Dust Sensor
  - STM32 Software Suite installed and configured
  - Arduino IDE

**STM32F103** Pinout - https://lh6.googleusercontent.com/wYhAmRIfTgBSWtNt7KT8db70NY2XtEbobHzeHcdPY3SFLKqqIdhgkFJfxikIP2G-J9E6-mFcK-SjpiPfQuUv9yWdaE79o6oB-nglBWmMOmzwL2evWBQ9_uPq08BurhDM0pPziF4

Use "HardwareSerial.h" library to activate USART2 and USART3. USART1 is activated by default.

**ZH03B** Datasheet - https://www.winsen-sensor.com/d/files/air-quality/zh03-series-laser-dust-module-v2_0.pdf

Installing STM32 Add-on in Arduino IDE - https://www.sgbotic.com/index.php?dispatch=pages.view&page_id=48

Arduino IDE configurations (in the "Tools" menu):
  - Debug symbols and core logs: "None"
  - Optimize: "Smallest (-Os default)"
  - Board part number: "BluePill F103C8"
  - C Runtime Library: "Newlib Nano (default)"
  - Upload method: "STM32CubeProgrammer (SWD)"
  - USB support (if available): "None"
  - U(S)ART support: "Enabled (generic 'Serial)"
  - USB speed (if available): "Low/Full Speed"

1. Use the ST-LINK/V2 to upload program onto the board from the IDE (COM port grayed out in the "Tools" menu or "not connected" status for the board is normal)
2. Remove the ST-LINK/V2 connection from the computer and use the TTL Adapter to connect to the Serial Monitor on the IDE (COM port and board status should now be visible)
3. Make sure RX of the board is connected to the TX of the TTL Adapter and vice-versa
4. If both ST-LINK/V2 and TTL Adapter are connected to the computer at the same time, the IDE may default to using the TTL Adapter to upload the program and give an error
