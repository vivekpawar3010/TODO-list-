int buzzer = 12; // It change on the basis of the pins

void setup() { // pins setup is here
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT); //  led is connected  to pin 12 and it is a output 
}

void loop() { // used to run the content repetatively
  digitalWrite(buzzer, HIGH);// high means On, B1, 5v 
  // time to perform the above operation.
  delay(1000);// to make a human eyes can see the on and off of the led
  digitalWrite(buzzer, LOW); // low means Off, B0, 0v
  Serial.println("I am the student"); 
  delay(1000);
}


// Process to connect the tools on the breadboard
//1) connect the led to   