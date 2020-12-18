int ldr = A0;
void setup() {
  Serial.begin(9600);
  pinMode(ldr,INPUT);
}

void loop() {
  int val = analogRead(ldr);
  Serial.print("LDR : ");
  Serial.println(val);
  delay(500);
  
}
