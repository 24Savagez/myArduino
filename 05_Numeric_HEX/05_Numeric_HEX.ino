int Delays = 1000;
void setup() {
    for(int i=2 ; i<=9 ; i++)
      pinMode(i,OUTPUT);
}

void loop() {
  //Hex
  int LedState[10] = {0x3df,0x23,0x1d7,0x177,0x13b,0x17d,0x1fd,0x27,0x1ff,0x17f};
  //Pinmode
  int PinMode[9] = {1,2,3,4,5,6,7,8,9};

  for(int i=0 ; i<10 ; i++)
  {  
    for(int j=0 ; j<10 ; j++)
    {
      digitalWrite(PinMode[j],LedState[i]);
      delay(Delays);
    }
  }
}
