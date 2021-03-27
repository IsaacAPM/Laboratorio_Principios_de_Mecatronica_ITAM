// the setup function runs once when you press reset or power the board
int D13 = 13;
int D12 = 12;
int tiempo;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(D13, OUTPUT);
  pinMode(D12,INPUT);
}

// the loop function runs over and over again forever
void loop() {
  if(digitalRead(D12) == LOW){
    tiempo = 100;
  }else{
    tiempo = 2000;
  }
  
  digitalWrite(D13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(tiempo);                       // wait for a second
  digitalWrite(D13, LOW);    // turn the LED off by making the voltage LOW
  delay(tiempo);                       // wait for a second
}
