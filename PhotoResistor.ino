int luce;  
int ledPin = 9;  

void setup() {
}

void loop() {
  luce = analogRead(A0);  //Lettura luminosita su A0
  luce = luce/5;  //taratura luminosità
  analogWrite(ledPin,luce);  //Valore letto del LED
  delay(10);  //Delay di 10 ms
}
