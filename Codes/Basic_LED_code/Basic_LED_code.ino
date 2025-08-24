int led_pin = 13; //pin declaration

void setup () {  //pins are setup here
pinMode(led_pin, OUTPUT);  //pin set as output
}

void loop () {
  digitalWrite(led_pin,HIGH); // HIGH means On, B1, 5V,
  delay(100); // time to perform above operations
  digitalWrite(led_pin,LOW); // HIGH means Off, B0, 0V,
  delay(100); // time to perform above operations

}




