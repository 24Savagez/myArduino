#include <Servo.h>

Servo myservo;
int val = 0;
int vr = A0;
void setup() {
  // output
  Serial.begin(9600);
  myservo.attach(8);
  myservo.write(0);
  delay(1000);
}

void loop() {
  val = analogRead(vr);
  val = map(val, 0, 1023, 0, 180);
  Serial.println(val);
  myservo.write(val);
  delay(20);

}
