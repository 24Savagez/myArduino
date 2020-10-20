#include "TimerOne.h"
int trigPin = 12;  //Trigger
int echoPin = 13; //Echo
long duration,cm,us,inch;
 

int D1 = 8;

int D2 = 9;

int D3 = 10;

int D4 = 11;

int CommonAK = 2; // Common Anode set to 1, Common Cathode set to 2

 

int num[] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F };

int OnDigi = 0;

int NumberDisplay = 0;

bool ColonShow = false;

 

 

void setup() {

  // put your setup code here, to run once:

  Begin7Segment4Digi();

  //NumberDisplay = 1989;

  //serial port begin
  Serial.begin(9600);
  
  //define input and output
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

}

 

void loop() {
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
  
  delay(1000);
  NumberDisplay = cm;
  
}

 

void Begin7Segment4Digi() {

  DDRD  = 0xFF;

  pinMode(D1, OUTPUT);

  pinMode(D2, OUTPUT);

  pinMode(D3, OUTPUT);

  pinMode(D4, OUTPUT);

  digitalWrite(D1, (CommonAK==1 ? LOW : HIGH));

  digitalWrite(D2, (CommonAK==1 ? LOW : HIGH));

  digitalWrite(D3, (CommonAK==1 ? LOW : HIGH));

  digitalWrite(D4, (CommonAK==1 ? LOW : HIGH));

  Timer1.initialize(1000); // 1000 = 1mS

  Timer1.attachInterrupt(NextDigi);

}

 

void NextDigi() {

  digitalWrite(D1, (CommonAK==1 ? LOW : HIGH));

  digitalWrite(D2, (CommonAK==1 ? LOW : HIGH));

  digitalWrite(D3, (CommonAK==1 ? LOW : HIGH));

  digitalWrite(D4, (CommonAK==1 ? LOW : HIGH));

  int ShowOn = 0;

  OnDigi = (OnDigi==4 ? 1 : OnDigi+1);

  if (OnDigi==1) {

    if (NumberDisplay<10)

      ShowOn = NumberDisplay;

    else

      ShowOn = NumberDisplay%10;

  } else if (OnDigi==2) {

    if (NumberDisplay<10)

      ShowOn = 0;

    if (NumberDisplay<100)

      ShowOn = NumberDisplay/10;

    if (NumberDisplay<1000)

      ShowOn = (NumberDisplay/10)%10;

    if (NumberDisplay<10000)

      ShowOn = (NumberDisplay/10)%10;

  } else if (OnDigi==3) {

    ShowOn = (NumberDisplay / 100) % 10;

  } else if (OnDigi==4) {

    ShowOn = NumberDisplay / 1000;

  }

  if (CommonAK==1)

    PORTD = ~((num[ShowOn])|(ColonShow&&OnDigi==3 ? 0x80 : 0));

  else

    PORTD = ((num[ShowOn])|(ColonShow&&OnDigi==3 ? 0x80 : 0));

  if (OnDigi==1) {

    digitalWrite(D1, (CommonAK==1 ? LOW : HIGH));

    digitalWrite(D2, (CommonAK==1 ? LOW : HIGH));

    digitalWrite(D3, (CommonAK==1 ? LOW : HIGH));

    digitalWrite(D4, (CommonAK==1 ? HIGH : LOW));

  } else if (OnDigi==2) {

    digitalWrite(D1, (CommonAK==1 ? LOW : HIGH));

    digitalWrite(D2, (CommonAK==1 ? LOW : HIGH));

    digitalWrite(D3, (CommonAK==1 ? HIGH : LOW));

    digitalWrite(D4, (CommonAK==1 ? LOW : HIGH));

  } else if (OnDigi==3) {

    digitalWrite(D1, (CommonAK==1 ? LOW : HIGH));

    digitalWrite(D2, (CommonAK==1 ? HIGH : LOW));

    digitalWrite(D3, (CommonAK==1 ? LOW : HIGH));

    digitalWrite(D4, (CommonAK==1 ? LOW : HIGH));

  } else if (OnDigi==4) {

    digitalWrite(D1, (CommonAK==1 ? HIGH : LOW));

    digitalWrite(D2, (CommonAK==1 ? LOW : HIGH));

    digitalWrite(D3, (CommonAK==1 ? LOW : HIGH));

    digitalWrite(D4, (CommonAK==1 ? LOW : HIGH));

  }

}
