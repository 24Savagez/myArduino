int de = 500;
/////////////////////////////////////////
void setup() {
  for(int i=2 ; i<=9 ; i++)
  {
    pinMode(i,OUTPUT);
  }

}
void loop() {
 //
  int LedState[10][9] = { {1,1,1,1,1,1,0,0},        //0
                          {0,1,1,0,0,0,0,0},        //1
                          {1,1,0,1,1,0,1,0},        //2
                          {1,1,1,1,0,0,1,0},        //3
                          {0,1,1,0,0,1,1,0},        //4
                          {1,0,1,1,0,1,1,0},        //5
                          {1,0,1,1,1,1,1,0},        //6
                          {1,1,1,0,0,1,0,0},        //7
                          {1,1,1,1,1,1,1,0},        //8
                          {1,1,1,1,0,1,1,0}};       //9
  //////////////////////////////////////////////////
  for(int i=9 ; i>=0; i--)
  {
    int PinMode[9] = {2,3,4,5,6,7,8,9};
    for(int j=0 ; j<8 ; j++)
    {
      digitalWrite(PinMode[j],LedState[i][j]);
    }
    delay(de);
  }

 
}
