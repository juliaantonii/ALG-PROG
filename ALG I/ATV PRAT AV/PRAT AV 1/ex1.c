/* Três amigos, Carlos, André e Felipe, decidiram dividir uma conta de bar. Escreva um programa em C para ler o valor total da conta e imprimir quanto cada um deve pagar. Faça com que Carlos e André não paguem centavos. Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53 para Felipe.
Exemplo de entrada:
101.53

Exemplo de saída:
33.00 33.00 
35.53
*/

#include <stdio.h>

int main() {
    /* declara-se as variáveis */
    int carlos, andre;
    float felipe, conta;
    
    /* recolhe as entradas */
    printf("Insira o valor total da conta do bar:\n");
    scanf("%f", &conta);
    
    /* calcula-se o valor das contas de carlos e andre em inteiros (ignorando as casas decimais) */
    carlos = conta / 3;
    andre = conta / 3;
    
    /* calcula-se o valor da conta de felipe, subtraindo com dois valores inteiros e assim restando o valor em reais */
    felipe = conta - carlos - andre;
    
    /* imprime os valores de cada um */
    printf("%d %d\n%.2f", carlos, andre, felipe);
    
    return 0;
}
