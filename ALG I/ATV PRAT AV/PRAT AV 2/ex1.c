/* Escreva um programa em C que leia o horario de inı́cio e o horário de fim de um jogo de Xadrez e calcule a duração do jogo. O tempo máximo de duração do jogo é de 24 horas e o jogo pode iniciar em um dia e terminar no dia seguinte. Qualquer jogo tem duração mínima de 1 segundo. 
UTILIZE APENAS O QUE FOI ENSINADO ATÉ O MOMENTO PARA RESOLVER ESTA ATIVIDADE. NÃO UTILIZE, POR EXEMPLO, ESTRUTURAS DE DECISÃO COMPOSTAS OU LAÇOS. SUA RESPOSTA PODE SER DESCONSIDERADA CASO USE.
Exemplo de entrada 1: 
13h10m10s
13h10m11s

Exemplo de saída 1:
0h0m1s
Exemplo de entrada 2: 
2h2m2s
3h3m3s

Exemplo de saída 2:
1h1m1s
*/

#include <stdio.h>

int main(){
    
    int hi, mi, si, hf, mf, sf, hi_conv, mi_conv, inicio, hf_conv, mf_conv, fim, duracao, hd, md, sd;
    
    printf("Insira um horário de início:\n");
    scanf("%dh%dm%ds", &hi, &mi, &si);
    
    printf("Insira um horário de fim:\n");
    scanf("%dh%dm%ds", &hf, &mf, &sf);
    
    /* 1h = 60m
    1m = 60s
    1h = 3600s */
    
    hi_conv = hi * 3600;
    mi_conv = mi * 60;
    inicio = hi_conv + mi_conv + si;
    
    hf_conv = hf * 3600;
    mf_conv = mf * 60;
    fim = hf_conv + mf_conv + sf;
    
    if(fim<=inicio){
        fim = fim + (24 * 3600);
    }
    
    duracao = fim - inicio;
    
    hd = duracao / 3600;
    md = duracao / 60 - hd * 60;
    sd = duracao - md * 60 - hd * 3600;
    
    printf("%dh%dm%ds", hd, md, sd);
    
    return 0;
    
}
