/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


#define pinLED1 PA_10
#define pinBT1 PA_15

DigitalOut led1(pinLED1);
DigitalIn bt1(pinBT1);
Timeout cronometro;

void apagaAlDeTiempo();

int main()
{
    led1=1;
    while (true)
    {
        if(bt1==1){
            printf("pulsado\n");
            led1=0; //Enciende
            cronometro.attach(&apagaAlDeTiempo,2.0);
            sleep();
        }
        
    }
}

void apagaAlDeTiempo(){
    led1=1; //Enciende
}