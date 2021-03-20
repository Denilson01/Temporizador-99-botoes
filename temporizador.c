/*
 * File:   temporizador.c
 * Author: Micro
 *
 * Created on 17 de Março de 2021, 01:43
 */

#include "botoes.h"
#include "config.h"
#include "display7seg.h"
#include "delay.h"
#include <xc.h>

void temporizador_99(void) // com botoes; delay; display7seg; configuracao
{
    init_botoes();
    init_display7seg1();
    init_display7seg2();
    int unidade = 9;
    int dezena = 9;
    int bloco = 0;
    unsigned int t = 1000; // talvez criar um botao para aumentar ou diminuir

    
    while(1)
    {
        switch(bloco)
        {
            case 0:
                bloco = 1;                
                break;
                
            case 1:
                display1(dezena);
                display2(unidade);
                --unidade;
                delay(t);               
                if(botao_config() == 1)
                {
                    bloco = 3;
                }
                if(unidade < 0)
                {
                    unidade = 9;
                    bloco = 2;                
                }
                break;
                
            case 2:
                --dezena;
                display1(dezena);
                if(dezena < 0)
                {
                    dezena = 9;
                    bloco = 1;
                }
                else
                    bloco = 1;
                break;
                
            case 3:     
                bloco = 4;                
                break;
                
            case 4:
                    if(botao_unidade() == 1)
                    bloco = 5;
                    if(botao_dezena() == 1)
                    bloco = 6;
                    if(botao_play() == 1)
                    bloco = 7;
                
                break;
                
            case 5:              
                ++unidade;
                if(unidade > 9)
                {
                    unidade = 0;
                }
                delay(150);
                display2(unidade);
                bloco = 3;
                break;
                
            case 6:                               
                ++dezena;
                if(dezena > 9)
                {
                    dezena = 0;
                }
                display1(dezena);
                delay(150);
                bloco = 3;
                break;
                
            case 7:
                delay(500);
                bloco = 0;
                break;       
        }
    }
}
