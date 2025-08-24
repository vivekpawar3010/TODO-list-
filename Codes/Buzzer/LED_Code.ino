// int led_pin = 12; // pin declaration 
int led-pin = 13; // use for the only arduino 

void setup() { // pins setup is here
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT); //  led is connected  to pin 12 and it is a output 
}

void loop() { // used to run the content repetatively
  digitalWrite(led_pin, HIGH);// high means On, B1, 5v 
  // time to perform the above operation.
  delay(1000);// to make a human eyes can see the on and off of the led
  digitalWrite(led_pin, LOW); // low means Off, B0, 0v
  Serial.println("I am the student");
  delay(100);
}


// Process to connect the tools on the breadboard
//1) connect the led to 