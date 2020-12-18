// potentiometer wiper (middle terminal) connected to analog pin 3
int analogPin_left =A0; 
int analogPin_mid =A1;
int analogPin_right =A2;
// outside leads to ground and +5V
int val_left = 0; // variable to store the value read
int val_mid = 0; 
int val_right = 0; 
//
int led_left = 13;
int led_right = 12;
int led_break = 11;
//
String left ="left: ";
String right ="   right: ";
String mid="    mid: ";
//
int distance = 700;
void setup()
{
//
Serial.begin(9600); 
// setup serial
pinMode(analogPin_left,INPUT);
pinMode(analogPin_mid,INPUT);
pinMode(analogPin_right,INPUT);
//
pinMode(led_left,OUTPUT);
pinMode(led_right,OUTPUT);
pinMode(led_break,OUTPUT);
}
void loop()
{
val_left = analogRead(analogPin_left); // read the input pin
val_mid = analogRead(analogPin_mid);
val_right = analogRead(analogPin_right);

Serial.print(left);
Serial.print(val_left);
Serial.print(right);
Serial.print(val_right);
Serial.print(mid);
Serial.print(val_mid);
Serial.print("\n");

if(val_left < distance && val_mid < distance)
  digitalWrite(led_right,HIGH);
else
    digitalWrite(led_right,LOW); 
    
if(val_right < distance && val_mid < distance)
  digitalWrite(led_left,HIGH);
else
  digitalWrite(led_left,LOW); 

if(val_left < distance && val_right < distance && val_mid < distance)
{
  digitalWrite(led_break,HIGH);
  digitalWrite(led_left,LOW);
  digitalWrite(led_right,LOW);
}
else
  digitalWrite(led_break,LOW);
}
