int pin_D0 = 8;
int pin_A0 = A0;
int pin_A1 = A1;
int pin_A2 = A2;
void setup() {
  Serial.begin(9600);
}

void loop() {
  //int res = digitalRead(pin_D0);
  int val = analogRead(pin_A0);
  int va2 = analogRead(pin_A1);
  int va3 = analogRead(pin_A2);
  
  //Serial.print("Digital : ");
  //Serial.print(res);
  Serial.print("Analog01 : ");
  Serial.print(val);
  Serial.print("  Analog02 : ");
  Serial.print(va2);
  Serial.print("  Analog03 : ");
  Serial.println(va3);
  delay(500);
}
