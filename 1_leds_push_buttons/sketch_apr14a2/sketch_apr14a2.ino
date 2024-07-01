
//int sensorValue = 0;
//int barra_led(int = v);
int i;

void setup() {
  // put your setup code here, to run once:
  //DDRD = B1111111;
  //DDRB = B0011111;
  for(i=0; i<10; i++)
    pinMode(i, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //static int conta = 0;
  //PORTD = conta;
  for(i=0; i<10; i++){
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i,LOW);
    delay(1000);
  }    
  //delay(100) //da um pequeno delay pra improve a performance do simulador
  
}
