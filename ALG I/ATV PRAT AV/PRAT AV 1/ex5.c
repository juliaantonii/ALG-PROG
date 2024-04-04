/* Escreva um programa em C que recebe como entrada o nome (máximo de 10 caracteres e um indicador de fim de cadeia '\0'), idade e salário bruto de um funcionário. O programa deve exibir, separados por quebras de linha, o nome, a idade, o salário bruto reajustado e o salário lı́quido do funcionário,  considerando que:
• o salário bruto teve um reajuste de 38%;
• o funcionário deve receber uma gratificação de 20% do salário bruto;
• o salário total é descontado em 15%.
*/

#include <stdio.h>

int main() {
    char nome[11];
    int idade;
    float salario_bruto, salario_reaj, gratificacao, salario_liq;
    
    scanf("%10s", nome);
    
    scanf("%d", &idade);
    
    scanf("%f", &salario_bruto);
    
    /* calcular reajuste */
    
    salario_reaj = salario_bruto * 1.38;
    
    /* calcular gratificação */
    
    gratificacao = salario_reaj * 0.20;
    
    /* calcular salário total */
    
    salario_liq = (salario_reaj + gratificacao) * 0.85;
    
    printf("%s\n", nome);
    printf("%d\n", idade);
    printf("%f\n", salario_reaj);
    printf("%f\n", salario_liq);
    
    return 0;
}
