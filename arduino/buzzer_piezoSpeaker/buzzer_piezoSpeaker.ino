/* Arduino tutorial - Buzzer / Piezo Speaker
 More info and circuit:
 http://www.ardumotive.com/how-to-use-a-buzzer-en.html
 Dev: Michalis Vasilakis // Date: 9/6/2015 // www.ardumotive.com */



void setup(){
  pinMode(9, OUTPUT); // Set buzzer - pin 9 as an output
}



void loop(){
  tone(9, 1000); // Send 1KHz sound signal...
  delay(9);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
}

