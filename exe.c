/*
 * Tarefa de laboratorio 04 - Boas-vindas com "Bom dia", "Boa tarde" ou "Boa
 *                            noite"
 *
 * GEX605 AB 2020/1
 *
 * Nome:      XXXX
 * Matricula: XXXX
 *
 * Data:      30/09/2020
 *
 * Descricao: Este programa recebe como entrada uma hora e imprime uma
 *            mensagem de boas-vindas com "Bom dia", "Boa tarde" ou "Boa
 *            noite", dependendo da hora recebida.
 *
 * Entrada:   Uma hora (sem os minutos, como um numero entre 0 e 23).
 *
 * Saida:     Mensagem de boas-vindas com "Bom dia", "Boa tarde" ou "Boa
 *            noite", dependendo da hora recebida.
 *
 */

#include <stdio.h>

int main(){
    int time;

    scanf("%d", &time);

    if (time >=0 && time <=11){
        printf("Bom dia, bem-vindo(a) ao curso de Estruturas de Dados!\n");
    }else if (time >=12 && time <=18){
        printf("Boa tarde, bem-vindo(a) ao curso de Estruturas de Dados!\n");
    }else if(time >=19 && time <=23){
        printf("Boa noite, bem-vindo(a) ao curso de Estruturas de Dados!\n");
    }

    return 0;

}