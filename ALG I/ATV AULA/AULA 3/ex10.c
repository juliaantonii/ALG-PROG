/* Escreva um algoritmo que recebe 3 valores que representam os
comprimentos dos lados de um triângulo. O algoritmo deve verificar

se os valores formam um triângulo válido e caso formem, classificá-
lo como equilátero, isósceles ou escaleno. Para formar um triângulo,

nenhum lado pode ter valor comprimento zero ou ter valor maior do
que a soma dos outros dois.*/

#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Insira os comprimentos dos tres lados do triangulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0 || 
        lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1) {
        printf("Os valores inseridos nao formam um triangulo valido.\n");
    }
    else {
        if (lado1 == lado2 && lado1 == lado3) {
            printf("O triangulo e equilatero.\n");
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("O triangulo e isosceles.\n");
        }
        else {
            printf("O triangulo e escaleno.\n");
        }
    }

    return 0;
}
