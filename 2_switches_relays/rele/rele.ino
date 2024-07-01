// C++ code
//
/*
20230425
*/
int atraso = 500;//tempo pisca pisca
void piscar(int periodo);
int buttonState = 0;
void setup()
{
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(13, OUTPUT);
}
void loop()
{
  int i;
piscar(atraso);
//PISCAR NUNCA RETURNS, comentar para usar o botão
// read the state of the pushbutton value
buttonState = digitalRead(2);
// check if pushbutton is pressed. if it is, the
// buttonState is HIGH
if (buttonState == HIGH) {
// turn LED on
  for(i=0;i<10;i++){
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(13, HIGH);
    // turn LED off
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(13, LOW);
    delay(100);
  }
}
delay(10); // Delay a little bit to improve simulation performance
}
void piscar(int periodo)
{
  for(int i=0;i<3;i++){//loop infinito
    digitalWrite(13, HIGH);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(periodo);
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(13, LOW);
    delay(periodo);
  }
}
