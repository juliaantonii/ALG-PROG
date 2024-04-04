/* No correio local há somente selos de 3 e de 5 centavos. A taxa mı́nima para correspondência é de 8 centavos. Escreva um programa em C que determina o menor número de selos de 3 e de 5 centavos que completam o valor de uma taxa (valor inteiro) informada como entrada. A saída deve ser um par de valores inteiros que representam a quantidade de selos de 3 centavos e a quantidade de selos de 5 centavos, respectivamente. 
Dica para solução: analise o resto da divisão inteira. Há poucas possibilidades que podem ser tratadas. 
Exemplo de entrada: 
13 
Exemplo de saída: 
1 2
*/

#include <stdio.h>

int main() {
    int taxa, selos_3, selos_5;
    
    printf("Digite o valor da taxa (em centavos): ");
    scanf("%d", &taxa);

    if (taxa < 8) {
        printf("O valor da taxa deve ser no mínimo 8 centavos.\n");
    }
    else{

        selos_5 = taxa / 5;
        taxa = taxa % 5;

        if (taxa % 3 != 0) {
            if (selos_5 > 0) {
                selos_5 = selos_5 - 1;
                taxa = taxa + 5;
            }
            
            if (taxa % 3 != 0) {
                selos_5 = selos_5 - 1;
                taxa = taxa + 5;
            }
        }

    selos_3 = taxa / 3;
    }
    
    printf("%d %d\n", selos_3, selos_5);

    return 0;
}
