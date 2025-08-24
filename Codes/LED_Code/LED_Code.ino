int led_pin_red = 13;   // Red LED for Stop
int led_pin_yellow = 12; // Yellow LED for Ready
int led_pin_green = 11;  // Green LED for Go

void setup() { 
  Serial.begin(9600);  //set port 9600 
  pinMode(led_pin_red, OUTPUT); // set led_pin_red as OUTPUT
  pinMode(led_pin_yellow, OUTPUT);// set led_pin_yellow as OUTPUT
  pinMode(led_pin_green, OUTPUT);// set led_pin_green as OUTPUT
}

void loop() { 
  // Red Light (Stop)
  digitalWrite(led_pin_red, HIGH); // on the red led pin 
  Serial.println("Red Light ON - Stop");
  delay(5000);  // 5 seconds 
  digitalWrite(led_pin_red, LOW); //of

  // Yellow Light (Ready)
  digitalWrite(led_pin_yellow, HIGH); //on the yellow lcd pin
  Serial.println("Yellow Light ON - Get Ready");
  delay(2000);  // 2 seconds
  digitalWrite(led_pin_yellow, LOW); //off

  // Green Light (Go)
  digitalWrite(led_pin_green, HIGH); //on the green lcd pin
  Serial.println("Green Light ON - Go");
  delay(5000);  // 5 seconds
  digitalWrite(led_pin_green, LOW); //off

  Serial.println("Traffic Light Cycle Completed");
  delay(1000);  // Small delay before restarting cycle
}
