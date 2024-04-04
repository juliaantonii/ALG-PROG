/* Escreva um programa em C que lê dois pares de valores inteiros. Cada par de valores corresponde às coordenadas de um ponto em um plano bi-dimensional de eixos x e y.
O par de pontos, chamados d1 e d2,  define um retângulo de lados paralelos aos eixos x e y, conforme ilustrado na figura abaixo pelo retângulo azul. Além deste par de pontos, o programa deve ler, ainda, as coordenadas de um terceiro ponto p e decidir se p é interno ou externo ao retângulo definido por d1 e d2. 
O programa deve exibir a mensagem Interno caso p seja interno ao retângulo e a mensagem Externo, caso contrário.
*/

#include <stdio.h>

int main(){
    
    int d1_x, d1_y, d2_x, d2_y, p_x, p_y;
    
    printf("Insira o eixo x e y do ponto d1.\n");
    scanf("%d %d", &d1_x, &d1_y);
    
    printf("Insira o eixo x e y do ponto d2.\n");
    scanf("%d %d", &d2_x, &d2_y);
    
    printf("Insira o eixo x e y do ponto p.\n");
    scanf("%d %d", &p_x, &p_y);
    
    if(d1_x <= p_x && d2_x >= p_x && d1_y <= p_y && d2_y >= p_y){
        printf("Interno");
    }
    else{
        if(d1_x >= p_x && d2_x <= p_x && d1_y >= p_y && d2_y <= p_y){
            printf("Interno");
        }
        else{
            if(d1_x >= p_x && d2_x <= p_x && d1_y <= p_y && d2_y >= p_y){
                printf("Interno");
            }
            else{
                if(d1_x <= p_x && d2_x >= p_x && d1_y >= p_y && d2_y <= p_y){
                   printf("Interno"); 
                }
                else{
                   printf("Externo"); 
                }
            }
        }
    }
    return 0;
}
