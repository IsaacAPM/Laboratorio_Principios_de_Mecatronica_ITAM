int D13 = 13;
int D12 = 12;
int D11 = 11;
int D10 = 10;
int D9 = 9;
int D8 = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(D13, OUTPUT);  
  pinMode(D12, OUTPUT); 
  pinMode(D11, OUTPUT); 
  pinMode(D10, OUTPUT); 
  pinMode(D9, OUTPUT);
  pinMode(D13, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:  
  digitalWrite(D13, HIGH);  
  digitalWrite(D12, LOW);  
  digitalWrite(D11, LOW);  
  digitalWrite(D10, LOW);  
  digitalWrite(D9, LOW);
  digitalWrite(D8, HIGH);     
  delay(5000);  
   digitalWrite(D13, HIGH);  
  digitalWrite(D12, LOW);  
  digitalWrite(D11, LOW);  
  digitalWrite(D10, LOW);  
  digitalWrite(D9, HIGH);
  digitalWrite(D8, LOW);     
  delay(1000);
  digitalWrite(D13, LOW);  
  digitalWrite(D12, LOW);  
  digitalWrite(D11, HIGH);  
  digitalWrite(D10, HIGH);  
  digitalWrite(D9, LOW);
  digitalWrite(D8, LOW);     
  delay(5000);
  digitalWrite(D13, LOW);  
  digitalWrite(D12, HIGH);  
  digitalWrite(D11, LOW);  
  digitalWrite(D10, HIGH);  
  digitalWrite(D9, LOW);
  digitalWrite(D8, LOW);     
  delay(1000);         
}
