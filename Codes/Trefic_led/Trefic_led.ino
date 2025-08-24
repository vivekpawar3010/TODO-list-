// int led_pin = 12; // pin declaration 
int led_pin_red = 13; // use for the only arduino 
int led_pin_yellow = 12;
int led_pin_green = 11;

void setup() { // pins setup is here
  Serial.begin(9600);
  pinMode(led_pin_red, OUTPUT); //  led is connected  to pin 12 and it is a output 
  pinMode(led_pin_yellow, OUTPUT);
  pinMode(led_pin_green, OUTPUT);
}

void loop() { // used to run the content repetatively
  // for the high traffic
  digitalWrite(led_pin_red, HIGH);// high means On, B1, 5v 
  // time to perform the above operation.
  delay(60000);
  digitalWrite(led_pin_red, LOW); // low means Off, B0, 0v
  ////////////////////////////////////////////////////////////////////////////////////////
  // for the ready to drive
  digitalWrite(led_pin_yellow, HIGH);// high means On, B1, 5v 
  // time to perform the above operation.
  delay(60000);
  digitalWrite(led_pin_yellow, LOW); // low means Off, B0, 0v
  ////////////////////////////////////////////////////////////////////////////////////
  // for the go to ride
  digitalWrite(led_pin_green, HIGH);// high means On, B1, 5v 
  // time to perform the above operation.
  delay(60000);
  digitalWrite(led_pin_green, LOW); // low means Off, B0, 0v
  Serial.println("I am the student");
  delay(100);
}


// Process to connect the tools on the breadboard
//1) connect the led to GORUND
//2) connect the l