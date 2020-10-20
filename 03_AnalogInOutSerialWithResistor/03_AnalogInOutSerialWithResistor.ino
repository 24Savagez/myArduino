const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = 9; // Analog output pin that the LED is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)
int total;
void setup() {
  
  Serial.begin(9600);
}

void loop() {
  
  sensorValue = analogRead(analogInPin); 

  //logic 01
  outputValue = map(sensorValue, 0, 1023, 0, 255);

  //logic 02
  //for(int i=sensorValue ; i>= 0 ; i++)
  //{
    //total = (int)(i*255)/1023;
  //}

  //logic01
  analogWrite(analogOutPin, outputValue);

  //logic02
  //analogWrite(analogOutPin, total);

  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);

  //logic01
  Serial.print("\t output = ");
  Serial.println(outputValue);

  //logic02 
  //Serial.print("\t output = ");
  //Serial.println(total);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(100);
}
