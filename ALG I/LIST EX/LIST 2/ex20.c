/* Escreva um algoritmo que leia a hora de in´ıcio e a hora de fim de um jogo de Xadrez 
(considere apenas horas inteiras, sem os minutos) e calcule a dura¸c˜ao do jogo em horas, 
sabendo-se que o tempo m´aximo de dura¸c˜ao do jogo ´e de 24 horas e que o jogo pode iniciar 
em um dia e terminar no dia seguinte. 
*/

#include <stdio.h>

int main(){
    int hi, hf, d;

    printf("Insira a hora de inicio do evento:");
    scanf("%d", &hi);
    printf("Insira a hora final do evento:");
    scanf("%d", &hf);

    d = hf - hi;

    if (hf < hi) {
        d = (24 - hi) + hf;
        if (d > 24) {
            d = 24;
        }
    } else {
        d = hf - hi;
    }

    // Exibir a duração do jogo
    printf("Duracao do jogo: %d horas\n", d);

    return 0;
}