int pin_D0 = 8;
int count = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(pin_D0) == 0)
  {
    count++;
    Serial.println(count);
    delay(100);
  }
}
