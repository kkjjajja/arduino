void setup() 
{
  Serial.begin(9600);  
}

void loop() 
{ 
  int value = analogRead(A0); //들어온 수치값을 저장하고 
  Serial.println(value); //시리얼을 통해 프로세싱에게 보내줍니다. 
  delay(100);
}
