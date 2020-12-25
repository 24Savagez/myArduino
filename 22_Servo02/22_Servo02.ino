#include <Servo.h>
///////////////////////////////////////
int lookRight();
int lookLeft();
int readDistance();
///////////////////////////////////////
Servo myservo;
///////////////////////////////////////
int trigPin = A0;
int echoPin = A1;
int distance,duration,cm;

///////////////////////////////////////
void setup() {
  //
  Serial.begin(9600);
  //
  myservo.attach(8);
  myservo.write(90);
  delay(2000);
  //
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

}

void loop() {
  int distanceR = 0;
  int distanceL = 0;

  distance = readDistance();

  if(distance <= 20)
  {
   
    
    distanceR = lookRight();
    delay(200);
    distanceL = lookLeft();
    delay(200);

    if(distanceR > distanceL)
    {
      
    }
    else
    {
      
    }
  }
  else
  {
    
  }
   
}
///////////////////////////////////////
int lookRight()
{
  myservo.write(0);
  delay(500);
  int distance = readDistance();
  delay(100);
  myservo.write(90);
  return distance;
  delay(100);
}
int lookLeft()
{
  myservo.write(180);
  delay(500);
  int distance = readDistance();
  delay(100);
  return distace;
  delay(100);
}
///////////////////////////////////////
int readDistance()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(echoPin,LOW);
  
  duration = pulseIn(echoPin,HIGH);
  distance = (duration / 2.0) / 29.1;
  return distance;

  //Serial.print(distance);
  //Serial.println(" cm.");
  //delay(300);
}
///////////////////////////////////////
