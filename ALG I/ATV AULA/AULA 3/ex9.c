/* Escreva um algoritmo que verifique se um número é par ou ímpar;*/

#include <stdio.h>

int main(){
    int x;

    printf("Insira um valor:");
    scanf("%d", &x);

    if(x%2==0){
        printf("Este valor é par");
    }else{
        printf("Este valor é impar");
    }

    return 0;
}