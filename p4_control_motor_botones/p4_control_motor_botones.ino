int d13 = 13;
int d12 = 12;
int d11 = 11;
int d10 = 10;
int d09 = 9;
int d08 = 8;
int d07 = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(d13, OUTPUT);
  pinMode(d12, OUTPUT);
  pinMode(d11, OUTPUT);
  pinMode(d10, INPUT);
  pinMode(d09, INPUT);
  pinMode(d08, OUTPUT);
  pinMode(d07, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(d13,HIGH);

  if(digitalRead(d10)==HIGH){
    digitalWrite(d12,HIGH);
    digitalWrite(d08,HIGH);
  }else{
    digitalWrite(d12,LOW);
    digitalWrite(d08,LOW);
  }
  
  if(digitalRead(d09)==LOW){
    digitalWrite(d11,LOW);
    digitalWrite(d07,HIGH);
  }else{
    digitalWrite(d11,HIGH);
    digitalWrite(d07,LOW);
  }
  
}//LOOP
