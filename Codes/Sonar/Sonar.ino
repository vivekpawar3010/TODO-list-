#define TRIG_PIN 3   // Tirgger is a sender of the ultrasonic sound
#define ECHO_PIN 2   // ECHO  is a reciver of the ultrasonic sound

void setup () {
  Serial.begin(9600); // port of the serail moniter
  pinMode(TRIG_PIN, OUTPUT);  // Trigger as a output pin
  pinMode(ECHO_PIN, INPUT);  // Echo as a input pin
}

void loop () {
  digitalWrite(TRIG_PIN, LOW);  //  initila see the trigge pin to low
  delayMicroseconds(2);  // delay for the calculation
  digitalWrite(TRIG_PIN, HIGH);  // sending the ultrasonic wave
  delayMicroseconds(10);  // Delay to stay the sending the waves
  digitalWrite(TRIG_PIN, LOW);  // of the sending the ultrasonic waves

  long duration = pulseIn(ECHO_PIN, HIGH);  //On the echo pin to on the reciver and store the duration
  float distance = duration * 0.034/2;  // calculating the distance
  // Display the out put in the serial moniter
  Serial.println("Distance: ");
  Serial.println(distance);
  Serial.println(" cm");
  delay(200);  // delay to run again th loop of 0.2 sec
  
}