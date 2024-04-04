/* Escreva um algoritmo que receba dois números inteiros, a e b, Ver-
ifique e imprima qual deles é o maior, ou a mensagem “a = b” caso sejam iguais;*/

#include <stdio.h>

int main(){
    int a, b;

    printf("Insira dois valores inteiros:");
    scanf("%d %d", &a, &b);

    if(a>b){
        printf("O maior valor é igual: %d", a);
    } else {
        if(b>a){
            printf("O maior valor é igual: %d", b);
        } else {
            printf("%d = %d", a, b);
        }
    }

    return 0;
}