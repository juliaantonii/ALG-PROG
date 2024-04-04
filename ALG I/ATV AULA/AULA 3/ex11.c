/* Escreva um algoritmo que pede ao usuário para pensar em um número
inteiro entre 1 e 8 (inclusive). A seguir o algoritmo deve “adivinhar”
o número que o usuário pensou, sendo que para isso poderá fazer
no máximo três perguntas ao usuário cuja resposta deve ser sim ou
não.*/

#include <stdio.h>

int main() {
    char resposta;

    printf("Pense em um número de 1 a 8 e eu adivinharei.\n");
    
    printf("Seu número é menor ou igual a 4? (responda s para sim ou n para não): ");
    scanf(" %c", &resposta);

    if (resposta == 's') {
        printf("Seu número é par? ");
        scanf(" %c", &resposta); // Adicionei um espaço em branco antes de %c
        if (resposta == 's') {
            printf("Seu número é divisível por 4?\n");
            scanf(" %c", &resposta); // Adicionei um espaço em branco antes de %c
            if (resposta == 's') {
                printf("Seu número é 4\n");
            } else {
                printf("Seu número é 2\n");
            }  
        } else {
            printf("Seu número é divisível por 3?\n");
            scanf(" %c", &resposta); // Adicionei um espaço em branco antes de %c
            if (resposta == 's') {
                printf("Seu número é 3\n");
            } else {
                printf("Seu número é 1\n");
            }
        }
    } else {
        printf("Seu número é par? ");
        scanf(" %c", &resposta); // Adicionei um espaço em branco antes de %c
        if (resposta == 's') {
            printf("Seu número é divisível por 8?\n");
            scanf(" %c", &resposta); // Adicionei um espaço em branco antes de %c
            if (resposta == 's') {
                printf("Seu número é 8\n");
            } else {
                printf("Seu número é 6\n");
            }  
        } else {
            printf("Seu número é divisível por 7?\n");
            scanf(" %c", &resposta); // Adicionei um espaço em branco antes de %c
            if (resposta == 's') {
                printf("Seu número é 7\n");
            } else {
                printf("Seu número é 5\n");
            }
        }
    }
    return 0;
}