/////////////////
int trigPin = 11;
int echoPin = 12;
int playPin = 2;
int recPin = 3;
int inputPin = 7;
int ledPin = 8;
long duration,cm;
//////////////////
int ultraSound()
{
  
}
//////////////
void setup() {
  Serial.begin(9600);
  pinMode(playPin,OUTPUT);    //Play
  pinMode(recPin,OUTPUT);     //REC
  pinMode(trigPin,OUTPUT);    //TrigPin
  pinMode(echoPin,INPUT);     //Echopin
  pinMode(inputPin,INPUT);    //MotionSensor
  pinMode(ledPin,OUTPUT);
 
}

void loop() {
  //Clean High pulse
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  //Send pulse
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(echoPin,LOW);

  pinMode(echoPin,INPUT);
  duration = pulseIn(echoPin,HIGH);
  cm = (duration/2)/29.1;
  Serial.print(cm);
  Serial.print(" cm.");
  Serial.println();
  delay(500);

  int value = digitalRead(inputPin);

  if(cm <= 10 || value == HIGH)
  {
    Serial.println("Play Sound..");
    digitalWrite(2,1);
    digitalWrite(2,0);  //Stop Play
    delay(200);
  }

}
