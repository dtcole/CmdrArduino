/*****************************************************************************************
 * Creates a DCC command station using:
 * 1. potentiometer connected to analog pin 0 
 * 2. I2C LCD connected to analog pins 5 (SCL) & 4 (SDA)
 * 3. 12 digit kepad connected to digital pins ...
 * 4. Push buttons connected to digital pins ...
 * 5. DCC differential signal outputted on pins 9 & 10
 *
 * Useful links to learn more about Arduino:
 * Analog input with potentiometer - http://www.arduino.cc/en/Tutorial/AnalogInput
 * Digital input with push buttons - http://arduino.cc/en/Tutorial/Button
 *                                 - http://arduino.cc/en/Tutorial/Debounce 
 *                                 - http://arduino.cc/en/Tutorial/ButtonStateChange
 * LCD compatible with the Hitachi HD44780 driver (non I2C)
 *                                 - http://arduino.cc/en/Tutorial/LiquidCrystal 
 * LCD I2C Interfeaced             - http://www.dfrobot.com/wiki/index.php/I2C/TWI_LCD1602_Module_(Gadgeteer_Compatible)_(SKU:_DFR0063)
 * keypad .........................- http://playground.arduino.cc/Main/KeypadTutorial
 *
 *****************************************************************************************/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20,16,2);

void setup() {
  // put your setup code here, to run once:
  lcd.init();                      // initialize the lcd 
  
  // Print a message to the LCD.
  lcd.backlight();
  lcd.print("Hello, world!");
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
