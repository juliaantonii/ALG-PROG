/*Escreva um algoritmo que lê dois valores reais, efetua a adição desses
valores e apresenta o resultado caso ele seja maior que 10;*/

#include <stdio.h>

int main() {
    float x, y, soma;

    printf("Insira dois valores para realizar a soma: ");
    scanf("%f %f", &x, &y);

    soma = x + y;

    printf("A soma destes valores é igual a: %.2f\n", soma);

    return 0;
}