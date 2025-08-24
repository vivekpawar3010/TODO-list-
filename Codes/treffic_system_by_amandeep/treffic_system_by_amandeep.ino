int red = 10; //pin declaration
int yellow = 11;
int green = 12;
int buzzer = 9;

void setup () {  //pins are setup here
pinMode(red, OUTPUT);  //pin set as output
pinMode(yellow, OUTPUT);  //pin set as output
pinMode(green, OUTPUT);  //pin set as output
pinMode(buzzer, OUTPUT);  //pin set as output

}

void loop () {
  digitalWrite(red,HIGH); // HIGH means On, B1, 5V,
  delay(60000); // time to perform above operations
  digitalWrite(red,LOW); // HIGH means Off, B0, 0V,

  digitalWrite(yellow,HIGH); // HIGH means On, B1, 5V,
  delay(5000); // time to perform above operations
  digitalWrite(yellow,LOW); // HIGH means Off, B0, 0V,

  digitalWrite(green,HIGH); // HIGH means On, B1, 5V,

  digitalWrite(buzzer,HIGH); // HIGH means On, B1, 5V,
  delay(3000); // time to perform above operations
  digitalWrite(buzzer,LOW); // HIGH means Off, B0, 0V,
}



// traffic light control system using three leds
//  turn on the buzzer when green light

//  POT practical POM - Get information on potention=meter
//  get info on arduino architecture
