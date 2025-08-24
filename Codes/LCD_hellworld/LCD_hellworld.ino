#include<Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16 ,2);

// Define LCD pins (RS, E, D4, D5, D6, D7)
// LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
    lcd.init();   //initialise the lcd pins 
    lcd.backlight();   // To on the backlight
    lcd.setCursor(0, 0); // Initialize the LCD with 0 columns and 0 rows
    lcd.print("Amandeep Sagar"); // Print message on LCD
    lcd.setCursor(0, 1); // Initialize the LCD with 0 columns and 0 rows
    lcd.print("Amandeep Sagar"); // Print message on LCD
}

void loop() {
    // Nothing needed in loop, message stays displayed
}
