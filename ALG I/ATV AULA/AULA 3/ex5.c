/* Escreva um algoritmo que recebe quatro valores reais e indica o
menor deles;*/

#include <stdio.h>

int main(){
    float a, b, c, d, menor;

    printf("Insira quatro valores reais:");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    menor = a;

    if(b < menor){
        menor = b;
    }

    if(c < menor){
        menor = c;
    }
    
    if(d < menor){
        menor = d;
    }

    printf("O menor valor é: %f", menor);

    return 0;
}