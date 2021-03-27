const int analogPin = A0;
int EN = 11;
int D13 = 13;
int D12 = 12;
int D08 = 8;
int D07 = 7;
int value;      //variable que almacena la lectura analógica raw
int position;   //posicion del potenciometro en tanto por ciento
 
void setup() {
  pinMode(D13,OUTPUT);
  pinMode(D12,OUTPUT);
  pinMode(D08,OUTPUT);
  pinMode(D07,OUTPUT);
}
 
void loop() {
  value = analogRead(analogPin);          // realizar la lectura analógica raw
  position = map(value, 0, 1023, 255, -255);  
  analogWrite(EN,abs(position)); 
   
  digitalWrite(D13,LOW);
  digitalWrite(D12,LOW);
  digitalWrite(D08,LOW);
  digitalWrite(D07,LOW);
  
  if(position <= 0){
    digitalWrite(D13,HIGH);
    digitalWrite(D08,HIGH);
  }else{
    digitalWrite(D13,LOW);
    digitalWrite(D08,LOW);
  }
  
  if(position >= 0){
    digitalWrite(D12,HIGH);
    digitalWrite(D07,HIGH);
  }else{
    digitalWrite(D12,LOW);
    digitalWrite(D07,LOW);
  }
 
}//LOOP
