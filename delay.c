/*
 * File:   delay.c
 * Author: Micro
 *
 * Created on 27 de Fevereiro de 2021, 15:46
 */


#include <xc.h>
#include "config.h"

void delay(unsigned t) 
{
    while(t)
    {
    __delay_ms(1);
    --t;
    }
}