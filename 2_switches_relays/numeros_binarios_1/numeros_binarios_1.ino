/// C++ code
//
/*
contagem binaria usando registrador
*/
void contar();
void setup()
{
DDRD = B11111111; //PORTA 0 A 7
//DDRB = B00111111; //PORTA 8 9 10 11 12 13
pinMode(12, INPUT);
}
void loop()
{
if(digitalRead(12)){
//digitalWrite(8, HIGH);
contar();
}
else{
//reset?
}
delay(500);
return;
}
//Exercícios: teste o circuito montando na bancada:
// Exercício 2: Modifique o circuito acrescentaod mais seis LEDS nas portas 8 até 13
//exercicio 3, modifique o circuito fazendo um LED acender por vez qdo botão pressionado.
void contar()
{
static int conta = 0;
PORTD = conta;
//enviada palavra inteira para as porta 0 a 7
conta ++;
return;
}