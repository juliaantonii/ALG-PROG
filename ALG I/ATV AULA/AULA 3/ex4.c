/* Escreva um algoritmo que lê dois números inteiros quaisquer e os
imprime em ordem não decrescente;*/

#include <stdio.h>

int main(){
    int x, y;

    printf("Insira dois valores:\n");
    scanf("%d %d", &x, &y);

    if(x>=y){
        printf("%d %d\n", y, x);
    }else{
        printf("%d %d\n", x, y);
    }

    return 0;
}