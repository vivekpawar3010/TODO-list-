#define IR_sensor A2 // here we define the pin of the IR sensor
#define LED 13  // Pin of the LED
void setup()
{
  pinMode(IR_sensor,INPUT);   // defining the mode of the IR sensor as INPUT
  pinMode(LED,OUTPUT);  // defining LED as a OUTPUT
  Serial.begin(9600);  // here we define the serial port where we get thee output
}
void loop(){
  int sensorValue=digitalRead(IR_sensor);  // assign the IR sensor value to the variable
  if(sensorValue==HIGH)  // if the IR sensor is high object is there
  {
   digitalWrite(LED,HIGH);            // LED will turn on for the delay time
   Serial.println("Object Detected");  // print the output
  }
  else   // No any object detected
  {
    digitalWrite(LED,LOW);   // If no object LED turn off  for the delay time
    Serial.println("No Object");  // print the output
  }
  delay(100);  // delay time to slow the process and give the time to make the calculation ot the IR sensor
}