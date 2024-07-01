#define VERMELHO 8// porta
#define AMARELO 9
#define VERDE 10
#define TEMPO 1000// milissegundos

int botao_pressionado, i;

void lerBotao(){
  botao_pressionado = digitalRead(9);  
}

void setup(){
  for(i=8; i<=10; i++)
    pinMode(i, OUTPUT);
  pinMode(7, INPUT);
}

void loop(){
  botao_pressionado = LOW;
  digitalWrite(VERDE, HIGH);
  delay(2*TEMPO);
  lerBotao();
  digitalWrite(VERDE, LOW);
  digitalWrite(AMARELO, HIGH);
  delay(TEMPO);
  lerBotao();
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERMELHO, HIGH);
  if (botao_pressionado == HIGH)
    delay(5*TEMPO);
  delay(2*TEMPO);
  digitalWrite(VERMELHO, LOW);
}