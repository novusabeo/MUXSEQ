
#include <Arduino.h>
#include <EEPROM.h>

int print5;
byte i;
const int imax = 255;  // Max delay time size is (imax * delaymulti)/1000ms = x seconds
const int delaymulti = 30;  // Default max delay time for recording times between steps is 7.65 seconds

const int r8high = 1015;
const int r8low = 1000;
const int r7high = 999;
const int r7low = 980;
const int r6high = 970;
const int r6low = 950;
const int r5high = 930;
const int r5low =915;
const int r4high =855;
const int r4low =835;
const int r3high =700;
const int r3low =680;
const int r2high=520;
const int r2low =500;
//const int r1high =
//const int r1low =



byte LEDdly = 200;
byte customlength;
boolean condition1;
boolean condition2;
//Position bytes for the custom programmable sequencer pattern (64 possible individual positions (8 steps * 8 possible scenes)) (Amount of scenes is selected in the beginning of program mode)
byte pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25, pos26, pos27, pos28, pos29, pos30, pos31, pos32, pos33, pos34, pos35, pos36, pos37, pos38, pos39, pos40, pos41, pos42, pos43, pos44, pos45, pos46, pos47, pos48, pos49, pos50, pos51, pos52, pos53, pos54, pos55, pos56, pos57, pos58, pos59, pos60, pos61, pos62, pos63, pos64;


void Programmer(){
    int dim1 = 0;
    byte x = 65;
    condition1 = false;
    condition2 = false;
    print5 = analogRead(A5);
    digitalWrite(5, HIGH);
    delay(LEDdly);
    digitalWrite(5, LOW);
    delay(LEDdly);
    digitalWrite(5, HIGH);
    delay(LEDdly);
    digitalWrite(5, LOW);
    delay(LEDdly);
    digitalWrite(5, HIGH);
    delay(LEDdly);
    while (print5 <= 50 && digitalRead(2) == HIGH) {
        PORTB = 0;
        delay(100);
        PORTB = 7;
        delay(100);
        print5 = analogRead(A5);
        //Serial.print(print5);
        //Serial.print("\n");
        condition1 = true;
    }
    
    if (condition1 == true && digitalRead(2) == HIGH) {
        
        dim1 = analogRead(A5);
        if (dim1 >= r8low && dim1 <= r8high) {
            customlength = 8;
            condition2 = true;
        }
        if (dim1 >= r7low && dim1 <= r7high) {
            customlength = 7;
            condition2 = true;
        }
        if (dim1 >= r6low && dim1 <= r6high) {
            customlength = 6;
            condition2 = true;
        }
        if (dim1 >= r5low && dim1 <= r5high) {
            customlength = 5;
            condition2 = true;
        }
        if (dim1 >= r4low && dim1 <= r4high) {
            customlength = 4;
            condition2 = true;
        }
        if (dim1 >= r3low && dim1 <= r3high) {
            customlength = 3;
            condition2 = true;
        }
        if (dim1 >= r2low && dim1 <= r2high) {
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
            
            //DELAY SECTION
            i = 0;
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = 0;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos1 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos1 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos1 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos1 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos1 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos1 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos1 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos1 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos1;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos1;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1  >= r8low && dim1  <= r8high) {
                pos2 = 7;
                
            }
            if (dim1  >= r7low && dim1  <= r7high) {
                pos2 = 6;
                
            }
            if (dim1 >= r6low && dim1  <= r6high) {
                pos2 = 5;
                
            }
            if (dim1  >= r5low && dim1  <= r5high) {
                pos2 = 3;
                
            }
            if (dim1  >= r4low && dim1  <= r4high) {
                pos2 = 4;
                
            }
            if (dim1  >= r3low && dim1 <= r3high) {
                pos2 = 2;
                
            }
            if (dim1  >= r2low && dim1  <= r2high) {
                pos2 = 1;
                
            }
            if (dim1 >= 80 && dim1  <= 100) {
                pos2 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos2;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos2;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1  >= r8low && dim1  <= r8high) {
                pos3 = 7;
                
            }
            if (dim1  >= r7low && dim1  <= r7high) {
                pos3 = 6;
                
            }
            if (dim1  >= r6low && dim1  <= r6high) {
                pos3 = 5;
                
            }
            if (dim1  >= r5low && dim1  <= r5high) {
                pos3 = 3;
                
            }
            if (dim1  >= r4low && dim1  <= r4high) {
                pos3 = 4;
                
            }
            if (dim1  >= r3low && dim1  <= r3high) {
                pos3 = 2;
                
            }
            if (dim1  >= r2low && dim1  <= r2high) {
                pos3 = 1;
                
            }
            if (dim1  >= 80 && dim1  <= 100) {
                pos3 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos3;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos3;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos4 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos4 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos4 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos4 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos4 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos4 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos4 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos4 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos4;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos4;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos5 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos5 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos5 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos5 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos5 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos5 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos5 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos5 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos5;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos5;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos6 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos6 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos6 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos6 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos6 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos6 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos6 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos6 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos6;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos6;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos7 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos7 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos7 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos7 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos7 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos7 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos7 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos7 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos7;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos7;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos8 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos8 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos8 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos8 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos8 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos8 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos8 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos8 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos8;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos8;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
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
            /*digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);*/
        }
        if (customlength >= 2) {
            
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos9 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos9 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos9 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos9 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos9 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos9 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos9 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos9 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos9;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos9;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos10 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos10 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos10 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos10 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos10 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos10 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos10 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos10 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos10;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos10;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos11 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos11 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos11 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos11 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos11 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos11 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos11 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos11 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos11;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos11;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos12 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos12 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos12 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos12 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos12 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos12 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos12 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos12 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos12;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos12;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos13 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos13 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos13 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos13 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos13 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos13 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos13 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos13 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos13;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos13;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos14 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos14 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos14 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos14 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos14 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos14 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos14 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos14 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos14;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos14;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos15 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos15 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos15 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos15 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos15 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos15 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos15 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos15 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos15;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos15;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos16 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos16 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos16 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos16 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos16 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos16 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos16 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos16 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos16;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos16;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
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
            /*digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);*/
        }
        if (customlength >= 3) {
            
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos17 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos17 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos17 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos17 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos17 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos17 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos17 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos17 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos17;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos17;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos18 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos18 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos18 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos18 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos18 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos18 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos18 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos18 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos18;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos18;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos19 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos19 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos19 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos19 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos19 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos19 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos19 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos19 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos19;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos19;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos20 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos20 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos20 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos20 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos20 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos20 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos20 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos20 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos20;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos20;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos21 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos21 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos21 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos21 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos21 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos21 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos21 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos21 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos21;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos21;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos22 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos22 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos22 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos22 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos22 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos22 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos22 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos22 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos22;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos22;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos23 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos23 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos23 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos23 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos23 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos23 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos23 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos23 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos23;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos23;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos24 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos24 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos24 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos24 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos24 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos24 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos24 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos24 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos24;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos24;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
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
            /*digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);*/
        }
        if (customlength >= 4) {
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos25 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos25 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos25 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos25 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos25 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos25 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos25 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos25 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos25;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos25;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos26 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos26 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos26 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos26 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos26 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos26 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos26 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos26 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos26;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos26;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos27 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos27 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos27 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos27 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos27 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos27 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos27 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos27 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos27;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos27;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos28 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos28 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos28 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos28 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos28 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos28 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos28 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos28 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos28;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos28;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos29 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos29 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos29 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos29 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos29 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos29 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos29 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos29 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos29;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos29;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos30 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos30 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos30 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos30 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos30 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos30 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos30 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos30 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos30;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos30;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos31 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos31 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos31 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos31 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos31 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos31 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos31 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos31 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos31;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos31;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos32 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos32 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos32 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos32 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos32 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos32 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos32 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos32 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos32;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos32;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
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
            /*digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);*/
        }
        if (customlength >= 5) {
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos33 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos33 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos33 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos33 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos33 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos33 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos33 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos33 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos33;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos33;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos34 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos34 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos34 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos34 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos34 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos34 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos34 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos34 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos34;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos34;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos35 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos35 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos35 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos35 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos35 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos35 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos35 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos35 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos35;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos35;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos36 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos36 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos36 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos36 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos36 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos36 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos36 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos36 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos36;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos36;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos37 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos37 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos37 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos37 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos37 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos37 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos37 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos37 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos37;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos37;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos38 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos38 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos38 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos38 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos38 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos38 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos38 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos38 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos38;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos38;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos39 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos39 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos39 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos39 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos39 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos39 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos39 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos39 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos39;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos39;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos40 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos40 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos40 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos40 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos40 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos40 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos40 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos40 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos40;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos40;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
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
            /*digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);*/
        }
        if (customlength >= 6) {
            
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos41 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos41 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos41 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos41 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos41 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos41 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos41 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos41 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos41;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos41;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos42 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos42 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos42 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos42 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos42 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos42 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos42 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos42 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos42;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos42;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos43 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos43 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos43 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos43 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos43 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos43 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos43 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos43 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos43;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos43;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos44 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos44 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos44 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos44 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos44 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos44 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos44 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos44 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos44;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos44;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos45 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos45 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos45 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos45 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos45 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos45 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos45 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos45 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos45;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos45;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos46 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos46 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos46 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos46 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos46 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos46 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos46 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos46 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos46;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos46;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos47 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos47 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos47 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos47 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos47 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos47 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos47 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos47 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos47;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos47;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos48 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos48 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos48 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos48 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos48 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos48 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos48 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos48 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos48;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos48;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
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
            /*digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);*/
        }
        if (customlength >= 7) {
            
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos49 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos49 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos49 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos49 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos49 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos49 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos49 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos49 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos49;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos49;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos50 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos50 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos50 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos50 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos50 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos50 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos50 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos50 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos50;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos50;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos51 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos51 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos51 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos51 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos51 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos51 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos51 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos51 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos51;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos51;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos52 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos52 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos52 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos52 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos52 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos52 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos52 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos52 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos52;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos52;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos53 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos53 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos53 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos53 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos53 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos53 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos53 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos53 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos53;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos53;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos54 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos54 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos54 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos54 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos54 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos54 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos54 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos54 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos54;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos54;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos55 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos55 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos55 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos55 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos55 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos55 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos55 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos55 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos55;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos55;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos56 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos56 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos56 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos56 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos56 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos56 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos56 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos56 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos56;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos56;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
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
            /*digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);*/
        }
        if (customlength >= 8) {
            
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos57 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos57 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos57 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos57 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos57 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos57 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos57 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos57 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos57;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos57;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos58 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos58 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos58 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos58 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos58 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos58 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos58 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos58 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos58;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos58;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos59 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos59 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos59 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos59 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos59 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos59 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos59 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos59 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos59;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos59;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos60 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos60 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos60 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos60 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos60 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos60 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos60 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos60 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos60;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos60;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos61 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos61 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos61 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos61 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos61 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos61 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos61 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos61 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos61;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos61;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos62 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos62 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos62 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos62 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos62 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos62 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos62 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos62 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos62;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos62;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos63 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos63 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos63 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos63 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos63 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos63 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos63 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos63 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos63;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos63;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
            dim1 = analogRead(A5);
            if (dim1 >= r8low && dim1 <= r8high) {
                pos64 = 7;
                
            }
            if (dim1 >= r7low && dim1 <= r7high) {
                pos64 = 6;
                
            }
            if (dim1 >= r6low && dim1 <= r6high) {
                pos64 = 5;
                
            }
            if (dim1 >= r5low && dim1 <= r5high) {
                pos64 = 3;
                
            }
            if (dim1 >= r4low && dim1 <= r4high) {
                pos64 = 4;
                
            }
            if (dim1 >= r3low && dim1 <= r3high) {
                pos64 = 2;
                
            }
            if (dim1 >= r2low && dim1 <= r2high) {
                pos64 = 1;
                
            }
            if (dim1 >= 80 && dim1 <= 100) {
                pos64 = 0;
                
            }
            while (analogRead (A5) >= 50 && digitalRead(2) == HIGH) {
                PORTB = pos64;
                delay(10);
            }
            while (analogRead (A5) <= 50 && digitalRead(2) == HIGH) {
                PORTB = pos64;
                if(i<imax){
                    i++;}
                delay(delaymulti);
            }
            if(digitalRead(6) == HIGH){
                EEPROM.update(x, i);
                
                /*Serial.print(i);
                 Serial.print("\n");
                 Serial.print(EEPROM.read(x));
                 Serial.print("r\n");*/
            }
            x++;
            //Serial.print(x);
            //Serial.print("\n");
            i = 0;
            /////
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
            /*digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);
             digitalWrite(5, LOW);
             delay(50);
             digitalWrite(5, HIGH);
             delay(50);*/
        }
    }
    
}
