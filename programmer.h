
#include <Arduino.h>


int print5;
byte customlength;
boolean condition1;
boolean condition2;
//Position bytes for the custom programmable sequencer pattern (64 possible individual positions (8 steps * 8 possible scenes)) (Amount of scenes is selected in the beginning of program mode)
byte pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25, pos26, pos27, pos28, pos29, pos30, pos31, pos32, pos33, pos34, pos35, pos36, pos37, pos38, pos39, pos40, pos41, pos42, pos43, pos44, pos45, pos46, pos47, pos48, pos49, pos50, pos51, pos52, pos53, pos54, pos55, pos56, pos57, pos58, pos59, pos60, pos61, pos62, pos63, pos64;

void Programmer(){
  int dim1 = 0;
  condition1 = false;
  condition2 = false;
  print5 = analogRead(A5);
  digitalWrite(5, HIGH);
  delay(200);
  digitalWrite(5, LOW);
  delay(200);
  digitalWrite(5, HIGH);
  delay(200);
  digitalWrite(5, LOW);
  delay(100);
  digitalWrite(5, HIGH);
  delay(100);
  while (print5 <= 50 && digitalRead(2) == HIGH) {
    PORTB = 0;
    delay(100);
    PORTB = 7;
    delay(100);
    print5 = analogRead(A5);
    Serial.print(print5);
    Serial.print("\n");
    condition1 = true;
  }

  if (condition1 == true && digitalRead(2) == HIGH) {

    dim1 = analogRead(A5);
    if (dim1 >= 1000 && dim1 <= 1015) {
      customlength = 8;
      condition2 = true;
    }
    if (dim1 >= 980 && dim1 <= 999) {
      customlength = 7;
      condition2 = true;
    }
    if (dim1 >= 950 && dim1 <= 970) {
      customlength = 6;
      condition2 = true;
    }
    if (dim1 >= 915 && dim1 <= 930) {
      customlength = 5;
      condition2 = true;
    }
    if (dim1 >= 835 && dim1 <= 855) {
      customlength = 4;
      condition2 = true;
    }
    if (dim1 >= 680 && dim1 <= 700) {
      customlength = 3;
      condition2 = true;
    }
    if (dim1 >= 500 && dim1 <= 520) {
      customlength = 2;
      condition2 = true;
    }
    if (dim1 >= 80 && dim1 <= 100) {
      customlength = 1;
      condition2 = true;
    }
    Serial.print("Custom length is:");
    Serial.print(customlength);
    Serial.print("\n");
  }

  if (condition2 == true && digitalRead(2) == HIGH) {
    if (customlength >= 1) {
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos1 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos1 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos1 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos1 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos1 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos1 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos1 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos1 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }

      dim1 = analogRead(A5);
      if (dim1  >= 1000 && dim1  <= 1015) {
        pos2 = 7;

      }
      if (dim1  >= 980 && dim1  <= 999) {
        pos2 = 6;

      }
      if (dim1 >= 950 && dim1  <= 970) {
        pos2 = 5;

      }
      if (dim1  >= 915 && dim1  <= 930) {
        pos2 = 3;

      }
      if (dim1  >= 835 && dim1  <= 855) {
        pos2 = 4;

      }
      if (dim1  >= 680 && dim1 <= 700) {
        pos2 = 2;

      }
      if (dim1  >= 500 && dim1  <= 520) {
        pos2 = 1;

      }
      if (dim1 >= 80 && dim1  <= 100) {
        pos2 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1  >= 1000 && dim1  <= 1015) {
        pos3 = 7;

      }
      if (dim1  >= 980 && dim1  <= 999) {
        pos3 = 6;

      }
      if (dim1  >= 950 && dim1  <= 970) {
        pos3 = 5;

      }
      if (dim1  >= 915 && dim1  <= 930) {
        pos3 = 3;

      }
      if (dim1  >= 835 && dim1  <= 855) {
        pos3 = 4;

      }
      if (dim1  >= 680 && dim1  <= 700) {
        pos3 = 2;

      }
      if (dim1  >= 500 && dim1  <= 520) {
        pos3 = 1;

      }
      if (dim1  >= 80 && dim1  <= 100) {
        pos3 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos4 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos4 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos4 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos4 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos4 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos4 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos4 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos4 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos5 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos5 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos5 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos5 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos5 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos5 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos5 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos5 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos6 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos6 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos6 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos6 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos6 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos6 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos6 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos6 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos7 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos7 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos7 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos7 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos7 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos7 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos7 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos7 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos8 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos8 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos8 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos8 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos8 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos8 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos8 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos8 = 0;

      }
      Serial.print("First section complete:");
    /*  //Serial.print("\n");
      Serial.print(pos1);
      //Serial.print("\n");
      Serial.print(pos2);
      //Serial.print("\n");
      Serial.print(pos3);
      //Serial.print("\n");
      Serial.print(pos4);
      //Serial.print("\n");
      Serial.print(pos5);
      //Serial.print("\n");
      Serial.print(pos6);
      //Serial.print("\n");
      Serial.print (pos7);
      //Serial.print("\n");
      Serial.print(pos8);
      //Serial.print("\n");*/
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
    }
    if (customlength >= 2) {
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos9 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos9 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos9 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos9 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos9 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos9 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos9 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos9 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos10 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos10 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos10 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos10 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos10 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos10 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos10 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos10 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos11 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos11 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos11 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos11 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos11 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos11 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos11 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos11 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos12 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos12 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos12 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos12 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos12 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos12 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos12 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos12 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos13 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos13 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos13 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos13 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos13 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos13 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos13 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos13 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos14 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos14 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos14 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos14 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos14 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos14 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos14 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos14 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos15 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos15 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos15 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos15 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos15 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos15 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos15 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos15 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos16 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos16 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos16 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos16 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos16 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos16 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos16 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos16 = 0;

      }
      Serial.print("Second section complete:");
    /*  //Serial.print("\n");
      Serial.print(pos9);
      //Serial.print("\n");
      Serial.print(pos10);
      //Serial.print("\n");
      Serial.print(pos11);
      //Serial.print("\n");
      Serial.print(pos12);
      //Serial.print("\n");
      Serial.print(pos13);
      //Serial.print("\n");
      Serial.print(pos14);
      //Serial.print("\n");
      Serial.print (pos15);
      //Serial.print("\n");
      Serial.print(pos16);
      //Serial.print("\n");*/
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
    }
    if (customlength >= 3) {
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos17 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos17 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos17 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos17 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos17 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos17 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos17 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos17 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos18 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos18 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos18 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos18 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos18 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos18 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos18 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos18 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos19 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos19 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos19 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos19 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos19 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos19 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos19 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos19 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos20 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos20 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos20 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos20 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos20 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos20 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos20 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos20 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos21 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos21 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos21 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos21 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos21 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos21 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos21 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos21 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos22 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos22 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos22 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos22 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos22 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos22 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos22 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos22 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos23 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos23 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos23 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos23 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos23 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos23 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos23 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos23 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos24 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos24 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos24 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos24 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos24 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos24 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos24 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos24 = 0;

      }
      Serial.print("Third section complete:");
  /*    //Serial.print("\n");
      Serial.print(pos17);
      //Serial.print("\n");
      Serial.print(pos18);
      //Serial.print("\n");
      Serial.print(pos19);
      //Serial.print("\n");
      Serial.print(pos20);
      //Serial.print("\n");
      Serial.print(pos21);
      //Serial.print("\n");
      Serial.print(pos22);
      //Serial.print("\n");
      Serial.print (pos23);
      //Serial.print("\n");
      Serial.print(pos24);
      //Serial.print("\n");*/
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
    }
    if (customlength >= 4) {
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos25 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos25 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos25 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos25 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos25 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos25 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos25 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos25 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos26 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos26 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos26 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos26 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos26 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos26 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos26 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos26 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos27 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos27 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos27 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos27 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos27 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos27 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos27 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos27 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos28 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos28 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos28 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos28 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos28 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos28 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos28 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos28 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos29 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos29 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos29 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos29 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos29 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos29 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos29 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos29 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos30 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos30 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos30 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos30 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos30 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos30 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos30 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos30 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos31 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos31 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos31 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos31 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos31 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos31 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos31 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos31 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos32 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos32 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos32 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos32 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos32 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos32 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos32 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos32 = 0;

      }
      Serial.print("Fourth section complete:");
  /*    //Serial.print("\n");
      Serial.print(pos25);
      //Serial.print("\n");
      Serial.print(pos26);
      //Serial.print("\n");
      Serial.print(pos27);
      //Serial.print("\n");
      Serial.print(pos28);
      //Serial.print("\n");
      Serial.print(pos29);
      //Serial.print("\n");
      Serial.print(pos30);
      //Serial.print("\n");
      Serial.print (pos31);
      //Serial.print("\n");
      Serial.print(pos32);
      //Serial.print("\n");*/
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
    }
    if (customlength >= 5) {
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos33 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos33 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos33 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos33 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos33 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos33 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos33 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos33 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos34 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos34 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos34 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos34 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos34 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos34 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos34 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos34 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos35 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos35 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos35 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos35 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos35 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos35 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos35 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos35 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos36 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos36 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos36 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos36 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos36 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos36 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos36 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos36 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos37 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos37 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos37 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos37 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos37 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos37 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos37 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos37 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos38 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos38 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos38 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos38 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos38 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos38 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos38 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos38 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos39 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos39 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos39 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos39 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos39 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos39 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos39 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos39 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos40 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos40 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos40 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos40 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos40 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos40 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos40 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos40 = 0;

      }
      Serial.print("Fifth section complete:");
  /*    //Serial.print("\n");
      Serial.print(pos33);
      //Serial.print("\n");
      Serial.print(pos34);
      //Serial.print("\n");
      Serial.print(pos35);
      //Serial.print("\n");
      Serial.print(pos36);
      //Serial.print("\n");
      Serial.print(pos37);
      //Serial.print("\n");
      Serial.print(pos38);
      //Serial.print("\n");
      Serial.print (pos39);
      //Serial.print("\n");
      Serial.print(pos40);
      //Serial.print("\n");*/
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
    }
    if (customlength >= 6) {
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos41 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos41 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos41 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos41 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos41 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos41 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos41 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos41 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos42 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos42 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos42 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos42 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos42 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos42 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos42 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos42 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos43 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos43 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos43 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos43 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos43 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos43 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos43 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos43 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos44 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos44 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos44 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos44 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos44 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos44 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos44 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos44 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos45 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos45 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos45 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos45 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos45 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos45 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos45 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos45 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos46 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos46 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos46 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos46 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos46 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos46 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos46 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos46 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos47 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos47 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos47 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos47 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos47 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos47 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos47 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos47 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos48 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos48 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos48 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos48 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos48 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos48 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos48 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos48 = 0;

      }
      Serial.print("Sixth section complete:");
  /*    //Serial.print("\n");
      Serial.print(pos41);
      //Serial.print("\n");
      Serial.print(pos42);
      //Serial.print("\n");
      Serial.print(pos43);
      //Serial.print("\n");
      Serial.print(pos44);
      //Serial.print("\n");
      Serial.print(pos45);
      //Serial.print("\n");
      Serial.print(pos46);
      //Serial.print("\n");
      Serial.print (pos47);
      //Serial.print("\n");
      Serial.print(pos48);
      //Serial.print("\n");*/
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
    }
    if (customlength >= 7) {
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos49 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos49 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos49 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos49 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos49 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos49 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos49 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos49 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos50 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos50 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos50 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos50 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos50 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos50 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos50 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos50 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos51 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos51 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos51 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos51 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos51 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos51 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos51 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos51 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos52 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos52 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos52 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos52 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos52 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos52 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos52 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos52 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos53 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos53 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos53 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos53 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos53 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos53 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos53 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos53 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos54 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos54 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos54 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos54 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos54 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos54 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos54 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos54 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos55 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos55 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos55 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos55 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos55 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos55 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos55 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos55 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos56 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos56 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos56 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos56 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos56 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos56 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos56 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos56 = 0;

      }
      Serial.print("Seventh section complete:");
  /*    //Serial.print("\n");
      Serial.print(pos49);
      //Serial.print("\n");
      Serial.print(pos50);
      //Serial.print("\n");
      Serial.print(pos51);
      //Serial.print("\n");
      Serial.print(pos52);
      //Serial.print("\n");
      Serial.print(pos53);
      //Serial.print("\n");
      Serial.print(pos54);
      //Serial.print("\n");
      Serial.print (pos55);
      //Serial.print("\n");
      Serial.print(pos56);
      //Serial.print("\n");*/
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
    }
    if (customlength >= 8) {
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos57 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos57 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos57 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos57 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos57 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos57 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos57 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos57 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 1;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos58 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos58 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos58 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos58 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos58 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos58 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos58 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos58 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 2;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos59 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos59 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos59 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos59 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos59 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos59 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos59 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos59 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 4;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos60 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos60 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos60 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos60 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos60 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos60 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos60 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos60 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 3;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos61 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos61 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos61 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos61 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos61 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos61 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos61 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos61 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 5;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos62 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos62 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos62 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos62 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos62 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos62 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos62 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos62 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 6;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos63 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos63 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos63 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos63 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos63 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos63 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos63 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos63 = 0;

      }
      while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
        PORTB = 7;
        delay(10);
      }
      dim1 = analogRead(A5);
      if (dim1 >= 1000 && dim1 <= 1015) {
        pos64 = 7;

      }
      if (dim1 >= 980 && dim1 <= 999) {
        pos64 = 6;

      }
      if (dim1 >= 950 && dim1 <= 970) {
        pos64 = 5;

      }
      if (dim1 >= 915 && dim1 <= 930) {
        pos64 = 3;

      }
      if (dim1 >= 835 && dim1 <= 855) {
        pos64 = 4;

      }
      if (dim1 >= 680 && dim1 <= 700) {
        pos64 = 2;

      }
      if (dim1 >= 500 && dim1 <= 520) {
        pos64 = 1;

      }
      if (dim1 >= 80 && dim1 <= 100) {
        pos64 = 0;

      }
      Serial.print("Eigth section complete:");
  /*    //Serial.print("\n");
      Serial.print(pos57);
      //Serial.print("\n");
      Serial.print(pos58);
      //Serial.print("\n");
      Serial.print(pos59);
      //Serial.print("\n");
      Serial.print(pos60);
      //Serial.print("\n");
      Serial.print(pos61);
      //Serial.print("\n");
      Serial.print(pos62);
      //Serial.print("\n");
      Serial.print (pos63);
      //Serial.print("\n");
      Serial.print(pos64);
      //Serial.print("\n");*/
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
      digitalWrite(5, LOW);
      delay(50);
      digitalWrite(5, HIGH);
      delay(50);
    }
  }

}
