void setup() {

  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,INPUT);
  
}

void loop() {
  if(digitalRead(7)){
    digitalWrite(8,HIGH);
  }else if(digitalRead(9)){
    digitalWrite(8,LOW);
  }
  
}
  
