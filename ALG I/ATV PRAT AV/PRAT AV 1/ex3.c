/* Escreva um programa em C que, tendo como entrada três comprimentos positivos das arestas de uma caixa (x, y, z), em metros, calcule e informe a quantidade exata de tinta, em litros, necessária para pintá-la externamente. Seu programa também deve calcular e exibir o custo total, dado pela soma do valor da mão de obra com o valor do material. Para resolver o exercı́cio, considere que:
para pintar cada metro quadrado são necessários 3 litros de tinta;
para cada 10 metros quadrados é necessário um novo rolo de tinta que custa R$ 5,00;
a mão de obra custa R$ 20,00 por metro quadrado. O valor de mão de obra é cobrado integralmente por metro quadrado, mesmo nos casos onde a área contabiliza frações de metros quadrados;
cada lata de tinta contém 5 litros e custa R$ 45,00.
Exemplo de entrada:
1 1 1
Exemplo de saída:
São necessários 18.00 litros de tinta para pintar a caixa externamente. O valor total gasto será de R$ 305.00.
Obs: nesse exercício, você pode utilizar funções da biblioteca <math.h>, e a formatação de saída para limitar as casas decimais (ex: "%.1f" limita os valores para 1 casa decimal).
*/

#include <stdio.h>
#include <math.h>

int main() {
    
    /* declara-se as variáveis */
    float x, y, z, area1, area2, area3, area_total, tinta_quant, rolo, tinta_valor, mao_obra, gasto_total;
    
    /* recolhe as entradas */
    printf("Insira os três comprimentos da caixa:\n");
    scanf("%f %f %f", &x, &y, &z);
    
    /* calcula-se as áreas das bases da caixa */
    area1 = x * y;
    area2 = x * z;
    area3 = z * y;
    
    /* calcula-se a área total da caixa */
    area_total = (2 * area1) + (2 * area2) + (2 * area3);
    
    /* calcular a quantidade de tinta usada */
    tinta_quant = area_total * 3;
    
    /* calcular o valor dos rolos que serão usados */
    rolo = ceil(area_total / 10) * 5;
    
    /* calcular mão de obra */
    mao_obra = ceil(area_total) * 20;
    
    /* calcular o valor da tinta usada */
    tinta_valor = ceil(tinta_quant / 5) * 45;
    
    gasto_total = rolo + mao_obra + tinta_valor;
    
    printf("São necessários %.2f litros de tinta para pintar a caixa externamente. O valor total gasto será de R$ %.2f.", tinta_quant, gasto_total);
    
    return 0;
}
