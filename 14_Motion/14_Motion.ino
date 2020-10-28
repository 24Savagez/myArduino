int ledPin = 8;
int inputPin = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(inputPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(inputPin);

  if(value == HIGH)
  {
    digitalWrite(ledPin,HIGH);
    delay(1000);
    Serial.println(value);
  }
  else
  {
    digitalWrite(ledPin,LOW);
    Serial.println(value);
  }
}
