#include <Servo.h>


Servo myservo;
const int TRIGGER_PIN = A0;
const int ECHO_PIN = A1;
const int inter_time = 500;

unsigned long duration;
float distance;
float forWord();
void setup() {
  Serial.begin(9600);
  pinMode (TRIGGER_PIN, OUTPUT);
  pinMode (ECHO_PIN, INPUT);
  myservo.attach(0);
  myservo.write(90);
    delay(1000);
}

void loop() {
  if(forWord() <= 20.0 )
    myservo.write(180);
    delay(1000);
    
    

  
}

float forWord()
{
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(100);
  digitalWrite(TRIGGER_PIN, LOW);
  duration = pulseIn (ECHO_PIN, HIGH);
  distance = (duration / 2.0) / 29.0;
  
  Serial.print(distance);
  Serial.println(" cm");
  delay(inter_time);
  return distance;
}
