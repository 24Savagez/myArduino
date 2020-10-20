int d = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);    //1
  pinMode(4,OUTPUT);    //2
  pinMode(5,OUTPUT);    //3
  pinMode(6,OUTPUT);    //4
  pinMode(7,OUTPUT);    //5
  pinMode(8,OUTPUT);    //6
  pinMode(9,OUTPUT);    //7
  pinMode(10,OUTPUT);   //8
  

}

void loop() {
  // put your main code here, to run repeatedly:
  //0
  digitalWrite(10,0);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(d);

  //1
  digitalWrite(10,0);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(d);
  

  //2
  digitalWrite(10,0);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(d);
  
  //3
  digitalWrite(10,0);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(d);

  //4
   digitalWrite(10,0);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(d);

  //5
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(d);

  //6
   digitalWrite(10,0);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(d);

  //7
  digitalWrite(10,0);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(d);

  //8
  digitalWrite(10,0);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(d);

  //9
  digitalWrite(10,0);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(d);

}
