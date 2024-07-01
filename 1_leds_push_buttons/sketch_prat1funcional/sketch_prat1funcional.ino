void setup() {

  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  
}

void loop() {
  if(digitalRead(7)){
    digitalWrite(8,HIGH);
  }else{
    digitalWrite(8,LOW);
  }
  
}
  
