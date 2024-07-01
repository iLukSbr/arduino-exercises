
int sensorValue = 0;
int barra_led(int = v);

void setup() {
  // put your setup code here, to run once:
  DDRD = B1111111;
  DDRB = B0011111;
}

void loop() {
  // put your main code here, to run repeatedly:
  static int conta = 0;
  PORTD = conta;
  conta++;
  delay(100) //da um pequeno delay pra improve a performance do simulador
  
}
