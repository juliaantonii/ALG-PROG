/* Escreva um algoritmo que lê dois valores reais, efetua a adição desses
valores e apresenta o resultado caso ele seja maior que 10;*/

#include <stdio.h>

int main(){
    float x, y, soma;

    printf("Insira dois valores reais para efetuarmos uma soma:\n");
    scanf("%f %f", &x, &y);

    soma = x + y;

    if(soma > 10){
        printf("O valor da soma é igual a: %f\n", soma);
    }else{
        printf("O valor da soma é menor ou igual a 10\n");
    }

    return 0;
}