# This file intentionally left blank
MCU = atmega32u4
BOOTLOADER = caterina
BOOTMAGIC_ENABLE = lite     # Virtual DIP switch configuration
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
MIDI_ENABLE = no            # MIDI support
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no           # Audio output
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches
HD44780_ENABLE = no         # Enable support for HD44780 based LCDs
SPLIT_KEYBOARD = yes		# Split keeb
ENCODER_ENABLE = yes		# Enable encoders
OLED_DRIVER_ENABLE = no

# Enable VIA by default
VIA_ENABLE = yes
LT0_ENABLE = yes
