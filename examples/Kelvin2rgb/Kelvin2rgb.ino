#include <Kelvin2RGB.h>

String inString = "";

void setup() {
  Serial.begin(57600);
  Serial.println("Enter Temperature and brightness.   eg. 6600K50%");
}

void loop() {
  while (Serial.available() > 0) {
    int inChar = Serial.read();
    inString += (char)inChar;
    
    if (inChar == '\n') {

      int brightness = 100;
      int temperature = 0;

      temperature = inString.substring(0, inString.indexOf('K')).toInt();
      brightness = constrain(inString.substring(inString.indexOf('K')+1).toInt(), 0, 100);
      
      Kelvin2RGB kel(temperature, brightness);
      
      Serial.print("Temp:");
      Serial.print(kel.Temperature);
      Serial.print("K  Brightness:");
      Serial.print(kel.Brightness);
      Serial.print("%  Red:");
      Serial.print(kel.Red);
      Serial.print("  Green:");
      Serial.print(kel.Green);
      Serial.print("  Blue:");
      Serial.print(kel.Blue);

      Serial.println("    HEX:#" + String(kel.Red, HEX) + String(kel.Green, HEX) + String(kel.Blue, HEX));

      inString = "";
    }
  }
}


