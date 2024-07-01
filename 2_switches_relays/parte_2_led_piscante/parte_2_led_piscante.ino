// C++ code
//
/*
contagem binaria usando registrador
This example code is in the public domain.
*/
int barra_led(int v);
void setup()
{
DDRD = B11111111; //PORTA 0 A 7
DDRB = B00111111; //PORTA 8 9 10 11 12 13
}
void loop()
{
static int conta = 0;
PORTD = conta;
conta ++;
delay(100); // Delay a little bit to improve simulation performance
}
//Exercícios: teste o circuito montando na bancada:
// Exercício 2: Modifique o circuito acrescentaod mais seis LEDS nas portas 8 até 13