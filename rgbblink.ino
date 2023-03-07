/*
  Created by: Samuel Webster
  Created on: Feb 2023
  Turns an LED on for one second, then off for one second, repeatedly.
*/

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  for (int redvar = 0; redvar <= 1; redvar++) {
    for (int grnvar = 0; grnvar <= 1; grnvar++) {
      for (int bluvar = 0; bluvar <= 1; bluvar++) {
        digitalWrite(13, redvar);
        digitalWrite(12, grnvar);
        digitalWrite(11, bluvar);
        delay(1000); // Wait for 1000 millisecond(s)
      }
    }
  }
}
