/*
 * File:   display7seg.c
 * Author: Micro
 *
 * Created on 27 de Fevereiro de 2021, 16:34
 */


#include <xc.h>


char vetor[16] = { 0x3F, 0x06, 0x5B, 0x4F,
                   0x66, 0x6D, 0x7D, 0x07,
                   0x7F, 0x6F, 0x77, 0x7C,
                   0x39, 0x5E, 0x79, 0x71 };




void init_display7seg1(void)
{
    ANSELH = 0;
    TRISB = 0x00;
    PORTB = 0x00;
}

void init_display7seg2(void)
{
    TRISD = 0x00;
    PORTD = 0x00;
}

void display1(int x)
{
    PORTB = vetor[x];
}

void display2(int x)
{
    PORTD = vetor[x];
}
