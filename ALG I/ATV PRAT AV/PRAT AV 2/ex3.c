/* Escreva um programa em C que lê uma data. Seu programa deve calcular e exibir quantos dias se passaram desde o início do ano da data informada.
Exemplo:  se a data informada for 10/01/2020, 10 dias se passaram desde o início de 2020.
Se a data informada for 02/02/2020, 33 dias se passaram (31 de janeiro + 2 de fevereiro) desde o início de 2020.
Seu programa deve levar em consideração anos bissextos. Um ano é considerado bissexto se ele se enquadra em uma das duas possibilidades:
- É divisível por 400; ou
- É divisível por 4 mas não é divisível por 100.
UTILIZE APENAS O QUE FOI ENSINADO ATÉ O MOMENTO PARA RESOLVER ESTA ATIVIDADE. NÃO UTILIZE, POR EXEMPLO, ESTRUTURAS DE DECISÃO COMPOSTAS OU LAÇOS. SUA RESPOSTA PODE SER DESCONSIDERADA CASO USE.
Exemplo de entrada 1:
31/03/2021
Exemplo de saída 1:
90
Exemplo de entrada 2:
01/02/2020
Exemplo de saída 2:
32
*/

#include <stdio.h>

int main() {
    int dia, mes, ano, bissexto, dias_passados;

    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (ano % 400 == 0) {
        bissexto = 1;
    } else if (ano % 4 == 0 && ano % 100 != 0) {
        bissexto = 1;
    }

    dias_passados = dia;
    if (mes > 1) {
        dias_passados += 31;
    }
    if (mes > 2) {
        if (bissexto) {
            dias_passados += 29;
        } else {
            dias_passados += 28;
        }
    }
    if (mes > 3) {
        dias_passados += 31;
    }
    if (mes > 4) {
        dias_passados += 30;
    }
    if (mes > 5) {
        dias_passados += 31;
    }
    if (mes > 6) {
        dias_passados += 30;
    }
    if (mes > 7) {
        dias_passados += 31;
    }
    if (mes > 8) {
        dias_passados += 31;
    }
    if (mes > 9) {
        dias_passados += 30;
    }
    if (mes > 10) {
        dias_passados += 31;
    }
    if (mes > 11) {
        dias_passados += 30;
    }

    printf("Dias passados desde o início do ano: %d\n", dias_passados);

    return 0;
}