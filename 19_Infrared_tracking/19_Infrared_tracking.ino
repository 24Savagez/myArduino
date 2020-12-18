int pin_D0 = 8;
int pin_A0 = A0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int res = digitalRead(pin_D0);
  int val = analogRead(pin_A0);
  Serial.print("Digital : ");
  Serial.print(res);
  Serial.print("    Analog : ");
  Serial.print(val);
  Serial.print("\n");
  delay(1000);
}
