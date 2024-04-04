/* Escreva um programa em C que leia o dia e o horário de início e também o dia e horário de término de um campeonato de Xadrez e calcule a duração do campeonato.
O campeonato inicia e termina sempre dentro de um mesmo mês do ano, ou seja, não se preocupe com uma eventual mudança de mês.
Considere que o evento sempre tem duração mínima de um minuto e máxima de 31 dias.
Obs: na entrada, o dia será fornecido em uma linha e o horário na linha seguinte.
UTILIZE APENAS O QUE FOI ENSINADO ATÉ O MOMENTO PARA RESOLVER ESTA ATIVIDADE. NÃO UTILIZE, POR EXEMPLO, ESTRUTURAS DE DECISÃO COMPOSTAS OU LAÇOS. SUA RESPOSTA PODE SER DESCONSIDERADA CASO USE.
Exemplo de entrada 1:
5
08h12m23s
6
09h11m24s
Exemplo de saída 1:
1 d 0 h 59 m 1 s
Exemplo de entrada 2: 
5
08h12m23s
5
09h13m25s
Exemplo de saída 2:
0 d 1 h 1 m 2 s
*/

#include <stdio.h>

int main(){
    
    int di, hi, mi, si, df, hf, mf, sf, inicio, fim, duracao, dd, hd, md, sd;
    
    printf("Insira o dia de início:\n");
    scanf("%d", &di);
    
    printf("Insira um horário de início:\n");
    scanf("%dh%dm%ds", &hi, &mi, &si);
    
    printf("Insira o dia de fim:\n");
    scanf("%d", &df);
    
    printf("Insira um horário de fim:\n");
    scanf("%dh%dm%ds", &hf, &mf, &sf);
    
    inicio = di * 86400 + hi * 3600 + mi * 60 + si;
    fim = df * 86400 + hf * 3600 + mf * 60 + sf;

    duracao = fim - inicio;

    /* Limitando a duração mínima a um minuto */
    if (duracao < 60) {
        duracao = 60;
    }

    /* Limitando a duração máxima a 31 dias */
    if (duracao > 31 * 86400) {
        duracao = 31 * 86400;
    }
    
    dd = duracao / 86400;
    duracao = duracao - dd * 86400;

    hd = duracao / 3600;
    duracao = duracao - hd * 3600;

    md = duracao / 60;
    duracao = duracao - md * 60;

    sd = duracao;

    printf("%d d %d h %d m %d s\n", dd, hd, md, sd);

    return 0;
}