void setup(){
  DDRD = B00001111;// portas 0 a 3 como saída
}

void loop(){
  for(PORTD=B00000000; PORTD^B00001010; PORTD+=B00000001)
    delay(500);// espera o tempo
}