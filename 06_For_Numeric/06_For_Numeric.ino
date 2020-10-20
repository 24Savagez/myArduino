int PinMode[8] = {1,2,3,4,5,6,7,8};
int LedState[8];

void setup() {
  for(int i=1 ; i<=8 ; i++)
    pinMode(i,OUTPUT);

}

void loop() {
  //1
  int LedState1[] = {0,0,1,0,0,0,1,0};
  for(int i=0 ; i<8 ; i++)
  {
    digitalWrite(PinMode[i],LedState1[i]);
  }
  delay(500);
  //2
  int LedState2[] = {1,1,0,1,0,1,1,0};
  for(int i=0 ; i<8 ; i++)
  {
    digitalWrite(PinMode[i],LedState2[i]);
  }
  delay(500);
  //3
  int LedState3[] = {0,1,1,1,0,1,1,0};
  for(int i=0 ; i<8 ; i++)
  {
    digitalWrite(PinMode[i],LedState3[i]);
  }
  delay(500);
    //4
  int LedState4[] = {0,0,1,1,1,0,1,0};
  for(int i=0 ; i<8 ; i++)
  {
    digitalWrite(PinMode[i],LedState4[i]);
  }
  delay(500);
      //5
  int LedState5[] = {0,1,1,1,1,1,0,0};
  for(int i=0 ; i<8 ; i++)
  {
    digitalWrite(PinMode[i],LedState5[i]);
  }
  delay(500);
      //6
  int LedState6[] = {1,1,1,1,1,1,0,0};
  for(int i=0 ; i<8 ; i++)
  {
    digitalWrite(PinMode[i],LedState6[i]);
  }
  delay(500);
      //7
  int LedState7[] = {0,0,1,0,0,1,1,0};
  for(int i=0 ; i<8 ; i++)
  {
    digitalWrite(PinMode[i],LedState7[i]);
  }
  delay(500);
      //8
  int LedState8[] = {1,1,1,1,1,1,1,0};
  for(int i=0 ; i<8 ; i++)
  {
    digitalWrite(PinMode[i],LedState8[i]);
  }
  delay(500);
      //9
  int LedState9[] = {0,1,1,1,1,1,1,0};
  for(int i=0 ; i<8 ; i++)
  {
    digitalWrite(PinMode[i],LedState9[i]);
  }
  delay(500);
      //0
  int LedState0[] = {1,1,1,0,1,1,1,0};
  for(int i=0 ; i<8 ; i++)
  {
    digitalWrite(PinMode[i],LedState0[i]);
  }
  delay(500);
  
  }
