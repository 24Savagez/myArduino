int trigPin = 11;  //Trigger
int echoPin = 12; //Echo
long duration,cm,us,inch;

void setup()
{
  //serial port begin
  Serial.begin(9600);
  
  //define input and output
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}
void loop()
{
  //The sensor is triggered by a High pulse of 10 or more microseconds.
  //Give a short Low pulse before handd to ensure a clean High pulse
  
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(echoPin,LOW);
  
  //Read the signal from the sensor : a High pulse whose
  //duration is the time (in microseconds) from the sending
  //of the ping to the reception of it's echo off an object.
  
  pinMode(echoPin,INPUT);
  duration = pulseIn(echoPin,HIGH);
  
  //Convert the time into a distance
  cm = (duration/2)/29.1;   //divide by 29.1 or multiply by 0.0343
  us = cm/2;
  inch = cm/2.54;
  
  Serial.print(cm);
  Serial.print(" cm, \t");
  Serial.print(us);
  Serial.print(" us, \t");
  Serial.print(inch);
  Serial.print(" inch");
  Serial.println();
  
  delay(500);
}
