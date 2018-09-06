
#include <Arduino.h>
#include <programmer.h>
int delayt = 0;

//Swing integers change these to get different swing rates when that option is selected
int up1 = 10, up2 = 30, up3 = 50, up4 = 90, up5 = 160, up6 = 250, up7 = 370, up8 = 500;
//SWEEP PATTERN-----------------------------------------------------------------
void Sweep(){
    int c = 1;
    for (int i = 1; i > 0; i = i + c){
        if (analogRead(A4) > 500) {
            PORTB = i;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up2);
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
            
        }
        else {
            return;
        }
        if (i == 8) c = -1;             // switch direction at peak
    }
    
}


//NORMAL MODE PATTERN-----------------------------------------------------------

void Normal(){
    if (analogRead(A2) > 500) {
        PORTB = 1;
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up1);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    if (analogRead(A2) > 500) {
        PORTB = 2;
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up3);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    if (analogRead(A2) > 500) {
        PORTB = 4;
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up5);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    if (analogRead(A2) > 500) {
        PORTB = 3;
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up7);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    if (analogRead(A2) > 500) {
        PORTB = 5;
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up8);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    if (analogRead(A2) > 500) {
        PORTB = 6;
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up6);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    if (analogRead(A2) > 500) {
        PORTB = 7;
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up4);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    if (analogRead(A2) > 500) {
        PORTB = 8;
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up2);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    
}

// RANDOM MODE PATTERN ---------------------------------------------------------

void RandomM(){
    if (analogRead(A1) > 500) {
        PORTB = random(0, 8);
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up1);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    if (analogRead(A1) > 500) {
        PORTB = random(0, 8);
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up3);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    if (analogRead(A1) > 500) {
        PORTB = random(0, 8);
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up5);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    if (analogRead(A1) > 500) {
        PORTB = random(0, 8);
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up7);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    if (analogRead(A1) > 500) {
        PORTB = random(0, 8);
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up8);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    if (analogRead(A1) > 500) {
        PORTB = random(0, 8);
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up6);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    if (analogRead(A1) > 500) {
        PORTB = random(0, 8);
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up4);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
    if (analogRead(A1) > 500) {
        PORTB = random(0, 8);
        delayt = analogRead(A3);
        if (digitalRead(4) == HIGH) {
            delay(delayt + up2);
        }
        else {
            delay(delayt + 1);
        }
        //Serial.print(delayt);
        //Serial.print("\n");
    }
    else {
        return;
    }
}

// CUSTOM PATTERN (USER PROGRAMMABLE)-------------------------------------------

void Custom(){
    byte y = 66;
    if (customlength >= 1) {
        if (digitalRead(3) == HIGH) {
            PORTB = pos1;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up1);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos2;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up3);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos3;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up5);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos4;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up7);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos5;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up8);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos6;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up6);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos7;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up4);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos8;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up2);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
    }
    
    if (customlength >= 2 && digitalRead(2) != HIGH) {
        if (digitalRead(3) == HIGH) {
            PORTB = pos9;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up1);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos10;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up3);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos11;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up5);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos12;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up7);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos13;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up8);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos14;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up6);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos15;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up4);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos16;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up2);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
    }
    if (customlength >= 3 && digitalRead(2) != HIGH) {
        if (digitalRead(3) == HIGH) {
            PORTB = pos17;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up1);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos18;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up3);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos19;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up5);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos20;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up7);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos21;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up8);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos22;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up6);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos23;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up4);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos24;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up2);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
    }
    if (customlength >= 4 && digitalRead(2) != HIGH) {
        if (digitalRead(3) == HIGH) {
            PORTB = pos25;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up1);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos26;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up3);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos27;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up5);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos28;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up7);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos29;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up8);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos30;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up6);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos31;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up4);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos32;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up2);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
    }
    if (customlength >= 5 && digitalRead(2) != HIGH) {
        if (digitalRead(3) == HIGH) {
            PORTB = pos33;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up1);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos34;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up3);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos35;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up5);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos36;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up7);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos37;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up8);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos38;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up6);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos39;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up4);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos40;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up2);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
    }
    if (customlength >= 6 && digitalRead(2) != HIGH) {
        if (digitalRead(3) == HIGH) {
            PORTB = pos41;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up1);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos42;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up3);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos43;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up5);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos44;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up7);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos45;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up8);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos46;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up6);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos47;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up4);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos48;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up2);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
    }
    if (customlength >= 7 && digitalRead(2) != HIGH) {
        if (digitalRead(3) == HIGH) {
            PORTB = pos49;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up1);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos50;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up3);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos51;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up5);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos52;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up7);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos53;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up8);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos54;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up6);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos55;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up4);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos56;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up2);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
    }
    if (customlength >= 8 && digitalRead(2) != HIGH) {
        if (digitalRead(3) == HIGH) {
            PORTB = pos57;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up1);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos58;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up3);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos59;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up5);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos60;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up7);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos61;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up8);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos62;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up6);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos63;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up4);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        if (digitalRead(3) == HIGH) {
            PORTB = pos64;
            delayt = analogRead(A3);
            if (digitalRead(4) == HIGH) {
                delay(delayt + up2);
            }
            if (digitalRead(6) == HIGH){
                delay(EEPROM.read(y)*30);
                y++;
            }
            else {
                delay(delayt + 1);
            }
            //Serial.print(delayt);
            //Serial.print("\n");
        }
        else {
            return;
        }
        
    }
}
