/* Escreva um programa em C que lê 3 valores inteiros e os exibe na tela em ordem não-crescente.
Não é permitido o uso de estruturas de repetição, vetores ou qualquer outro conhecimento ainda não estudado na solução deste exercício.
*/

#include <stdio.h>

int main(){
    
    int x, y, z, menor, medio, maior;
    
    printf("Insira três valores inteiros:");
    scanf("%d %d %d", &x, &y, &z);
    
    if(x >= y && x >= z){
       maior = x;
       if (y >= z){
           medio = y;
           menor = z;
       }
       else{
           medio = z;
           menor = y;
       }
    }
    else{
        if(y >= x && y >= z){
            maior = y;
            if(x >= z){
                medio = x;
                menor = z;
            }
            else{
                medio = z;
                menor = x;
            }
        }
        else{
            maior = z;
            if(x >= y){
                medio = x;
                menor = y;
            }
            else{
                medio = y;
                menor = x;
            }
        }
    }
    
    printf("%d %d %d", maior, medio, menor);
    
return 0;
}
