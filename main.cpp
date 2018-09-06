#include <patterns.h>
#include <eepromfnc.h>
#include <Arduino.h>


//Pin Definitions
//WIll Update soon  

void setup() {
  DDRB = B00000111;

  pinMode (2, INPUT);
  pinMode (3, INPUT);
  pinMode (4, INPUT);
  pinMode (5, OUTPUT);
  digitalWrite (5, HIGH);
  Serial.begin(115200);
  ReadEEP();
}

void loop() {
  if (digitalRead(2) == HIGH) {
    Programmer();
    //Updates EEPROM with Values
    UpdateEEP();
  }
  else {
    digitalWrite(5, LOW);

    // SWEEP MODE PATTERN ------------------------------------------------------

    if (analogRead(A4) > 500 && digitalRead(2) != HIGH) {
      Sweep();
    }

    //NORMAL MODE PATTERN-------------------------------------------------------

    if (analogRead(A2) > 500 && digitalRead(2) != HIGH)  {
        Normal();
    }

    // RANDOM MODE PATTERN------------------------------------------------------

    if (analogRead(A1) > 500 && digitalRead(2) != HIGH)  {
      RandomM();
    }

    // CUSTOM PATTERN (USER PROGRAMMED) ----------------------------------------

    if (digitalRead(3) == HIGH && digitalRead(2) != HIGH)  {
      Custom();
      }
      else {
        Serial.print("No Connect");
        Serial.print("\n");
      }
    }


  }
