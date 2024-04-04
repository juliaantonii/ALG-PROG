/* Escreva um algoritmo que recebe quatro valores reais e determina a
soma dos três menores.*/

#include <stdio.h>

int main() {
    float num1, num2, num3, num4;
    float menor1, menor2, menor3, somaMenores;

    // Solicita ao usuário para inserir quatro valores
    printf("Insira quatro valores reais separados por espaços: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    // Assume que os primeiros três valores são os menores inicialmente
    menor1 = num1;
    menor2 = num2;
    menor3 = num3;

    // Encontra os três menores valores
    if (num2 < menor1) {
        menor3 = menor2;
        menor2 = menor1;
        menor1 = num2;
    }
    if (num3 < menor1) {
        menor3 = menor2;
        menor2 = num3;
        menor1 = menor2;
    }
    if (num4 < menor1) {
        menor3 = menor2;
        menor2 = menor1;
        menor1 = num4;
    }
    else if (num4 < menor2) {
        menor3 = menor2;
        menor2 = num4;
    }
    else if (num4 < menor3) {
        menor3 = num4;
    }

    // Calcula a soma dos três menores valores
    somaMenores = menor1 + menor2 + menor3;

    // Imprime a soma dos três menores valores
    printf("A soma dos três menores valores é: %.2f\n", somaMenores);

    return 0;
}
