#define POT_PIN A0  // set the potetiometeer pin to control the brightness of the LED
#define LED_PIN 9  // any LED pin to on/off

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(POT_PIN);
  int brightness = map(potValue, 0 , 1023, 0, 255);  // calculate the position of the Potntiometer brightness of the LED
  analogWrite(LED_PIN, brightness); //fuction help to controal the brightness
  delay(10); //used to add the small delay
}
