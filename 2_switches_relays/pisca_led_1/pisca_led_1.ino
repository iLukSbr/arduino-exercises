// C++ code
//
/*
Este programa faz o LED interno piscar que esta
conectado à porta 13.
Neste contexto:
HIGH significa LIGADO
LOW significa CONECTADO AO TERRA (DESLIGADO?)
Fica a pergunta por que LOW em vez de desligado?
*/
void setup()
{
pinMode(13, OUTPUT);
}
void loop()
{
// turn the LED on (HIGH is the voltage level)
digitalWrite(13, HIGH);
delay(100); // Wait for 1000 millisecond(s)
// turn the LED off by making the voltage LOW
digitalWrite(13, LOW);
delay(100); // Wait for 1000 millisecond(s)
}