int led = 9;  

void setup() {
}

void loop()  { 
  int potenValue = analogRead(A0);
   analogWrite(led, potenValue/5);  
}
  
