//fade+button

const int buttonPin = 2; 
int led = 9;           
int brightness = 0;   
int fadeAmount = 1;    
int buttonState = 0;   

void setup()  { 
  pinMode(led, OUTPUT);
  pinMode(buttonPin, INPUT);    
} 

 
void loop()  { 
  buttonState = digitalRead(buttonPin);
   
  if (buttonState == HIGH) {     
    analogWrite(led, brightness);    
    brightness = brightness + fadeAmount; 
    if (brightness == 0 || brightness == 255) {
      fadeAmount = -fadeAmount ; 
    }     
    delay(30);                            
  }
  else{
    analogWrite(led, 0);   
  }
}



