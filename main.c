/*
 * File:   main.c
 * Author: Micro
 *
 * Created on 16 de Março de 2021, 22:32
 */

#include "botoes.h"
#include "config.h"
#include "delay.h"
#include "display7seg.h"
#include "temporizador.h"
#include <xc.h>


void main(void)
{
    while(1)
    {
        temporizador_99(); // com botoes(c0;c1;c2;c3); delay; display7seg(PORTD;PORTB); configuracao
    }
}




    
    
    

