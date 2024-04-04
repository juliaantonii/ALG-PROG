/* Escreva um programa em C que  recebe um número inteiro de segundos e computa a quantidade de horas, minutos e segundos correspondente.
Exemplo de entrada:
3723s
Exemplo de saída:
1h2m3s
*/

#include <stdio.h>

int main() {
    /* declara variáveis */
    int seg_totais, h, m, s;
    
    /* recolhe entradas */
    printf("Insira os segundos totais:");
    scanf("%ds", &seg_totais);
    
    /* 60 seg = 1 min
    60 min = 1hora
    3600 seg = 1 hora */
    
    h = seg_totais / 3600;
    m = seg_totais / 60 - h * 60;
    s = seg_totais - m * 60 - h * 3600;
    
    printf("%dh%dm%ds", h, m, s);
    
    return 0;
}