/* Escreva um programa em C onde, dada uma quantidade de tempo em horas, minutos e segundos, converta-a para a quantidade equivalente em segundos.
Exemplo de entrada:
1h2m3s

Exemplo de saída:
3723s
*/

#include <stdio.h>

int main() {
    /* declara variáveis */
    int h, m, s, conv_hora, conv_min, seg_totais;
    
    /* recolhe as entradas */
    printf("Insira uma hora, minuto e segundo:");
    scanf("%dh%dm%ds", &h, &m, &s);
    
    /*  1 hora = 60 min
        1 min = 60 seg 
        1 hora = 3600 seg */
        
    conv_hora = h * 3600;
    conv_min = m * 60;
    
    /* calcula-se os segundos totais */
    
    seg_totais = conv_hora + conv_min + s;
    
    /* printf("%d h", conv_hora);
    printf("%d m", conv_min);
    printf("%d s", s); */
    
    
    printf("%ds", seg_totais);

    return 0;
}