/* This code contain the info about the comining the code of the Ultrasonic sensor and LCD.
It display the distance between the Ultrasonic sensor and object and display it on the LCD display. 
Also i will the display distance on the terminal*/

#include<Wire.h>  // Required library
#include <LiquidCrystal_I2C.h>  // To display the things on the LCD I2C display
#define TRIG_PIN 9 //  define the trigger pin as 9 in Arduino uno
#define ECHO_PIN 10  //  define the ECHO pin as 10 in Arduino uno
LiquidCrystal_I2C lcd(0x27, 16 ,2);  // give the info about LCD which we connected

// Define LCD pins (RS, E, D4, D5, D6, D7)
// LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
    
    lcd.init();   //initialise the lcd pins 
    lcd.backlight();  // to on the back light

    Serial.begin(9600);  // deifne the port
    pinMode(TRIG_PIN, OUTPUT);  // define the Trigger pin as a output
    pinMode(ECHO_PIN, INPUT);   // define the ECHO pin as a input
    
}

void loop () {
  digitalWrite(TRIG_PIN, LOW);  // initialy set the trigger pin to LOW
  delayMicroseconds(2);         //delay to make calculations
  digitalWrite(TRIG_PIN, HIGH);   // after 2 seconds triger pin goes HIGH
  delayMicroseconds(10);        // delay 10 seconds for stay triger pin HIGH
  digitalWrite(TRIG_PIN, LOW);     // then triger pin goes to LOW

  long duration = pulseIn(ECHO_PIN, HIGH); // calculate the duration by using ECHO PIN
  float distance = duration * 0.034/2;  // calculate distanc
  // display output in serial monitor 
  Serial.println("Distance: ");   
  Serial.println(distance); 
  Serial.println(" cm");
  //   display the output on LCD 
  lcd.setCursor(0,0);
  lcd.print("Distance");
  lcd.setCursor(0,1);
  lcd.print(distance);
  //delay to 200 microseconds to dispay again distance
  delay(200);
  
}