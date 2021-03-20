/*
 * File:   botoes.c
 * Author: Micro
 *
 * Created on 28 de Fevereiro de 2021, 01:03
 */


#include <xc.h>

void init_botoes(void) //opcional
{
    ANSELH = 0;
    TRISCbits.TRISC0 = 1;
    TRISCbits.TRISC1 = 1;
    TRISCbits.TRISC2 = 1;
    TRISCbits.TRISC3 = 1;
    PORTCbits.RC0 = 0;
    PORTCbits.RC1 = 0;
    PORTCbits.RC2 = 0;
    PORTCbits.RC3 = 0;
}

int botao_unidade(void) //opcional
{
    return(PORTCbits.RC0);
}
int botao_dezena(void) //opcional
{
    return(PORTCbits.RC1);
}
int botao_play(void) //opcional
{
    return(PORTCbits.RC2);
}
int botao_config(void) //opcional
{
    return(PORTCbits.RC3);
}