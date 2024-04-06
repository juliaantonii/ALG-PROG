# Exercícios - Estrutura Sequencial

Esta é a Lista 1 de exercícios de algoritmos sequenciais. Nesta lista, você encontrará uma série de problemas que envolvem a aplicação de algoritmos sequenciais para resolver diferentes tipos de desafios. Os problemas variam em complexidade, abrangendo desde cálculos simples até operações mais elaboradas.

## 1. Determine o tipo de dado de cada uma das constantes abaixo:
(a) 613  
(b) -613  
(c) “a”  
(d) -28, 3 * 10^-23  
(e) 613, 0  
(f) “613”  
(g) ‘e’  
(h) ‘+’  
(i) “Fim de Questão” 

    **RESPOSTA**

    (a) - Inteiro (`int`)
    (b) - Inteiro (`int`)
    (c) - Caracteres (`char`)
    (d) - Número real (`float`) ou número em notação científica (`float`)
    (e) - Número real (`float`)
    (f) - Caracteres (`char`)
    (g) e (h) - Caracteres (`char`)
    (i) - String (`str`)


## 2. Determine o resultado das expressões:
(a) 1 / 2  
(b) 1 % 2  
(c) (200/10)%4  
(d) 5 * 2 + 3  
(e) 6 + 19 - 23  
(f) 3,0 * 5,0 + 1  
(g) 1 / 4 + 2  
(h) 29,0 / 7 + 4  
(i) 3 / 6,0 - 7 

    **RESPOSTA**

    (a) 1 / 2 = 0.5  
    (b) 1 % 2 = 1 (resto da divisão de 1 por 2)  
    (c) (200/10)%4 = 0 (resto da divisão de (200/10) por 4)  
    (d) 5 * 2 + 3 = 13  
    (e) 6 + 19 - 23 = 2  
    (f) 3.0 * 5.0 + 1 = 16.0  
    (g) 1 / 4 + 2 = 2.25  
    (h) 29.0 / 7 + 4 = 8.142857142857142  
    (i) 3 / 6.0 - 7 = -6.5


## 3. Suponha um algoritmo onde há apenas a variável var, do tipo caractere, declarada. 
Neste algoritmo, qual é a diferença entre as atribuições var ← A e var ← ‘A’? Ambas estão corretas? Explique.

    **RESPOSTA**

    - `var ← A`: Nesta atribuição, `A` é tratado como um identificador ou variável que deve conter um valor. Se `A` não estiver declarado ou não for uma constante definida, isso resultará em um erro ou uma operação indefinida, dependendo da linguagem de programação. Em muitas linguagens, `A` seria considerado uma variável não declarada, resultando em um erro de compilação ou execução.

    - `var ← ‘A’`: Aqui, `'A'` é um caractere literal, especificamente o caractere 'A'. Essa atribuição é válida e atribuirá à variável `var` o valor do caractere 'A'.

    Em resumo, `var ← A` provavelmente resultará em um erro, enquanto `var ← ‘A’` é a atribuição correta para atribuir o caractere 'A' à variável `var`.


## 4. Suponha um algoritmo onde há apenas a variável var, do tipo caractere, declarada. 
Neste algoritmo, qual é a diferença entre as atribuições var ← 3 e var ← ‘3’? Ambas estão corretas? Explique.

    **RESPOSTA**
    
    - `var ← 3`: Nesta atribuição, `3` é tratado como um valor numérico inteiro. Se a linguagem de programação permitir essa atribuição, `var` receberá o valor numérico inteiro `3`, não o caractere `'3'`.

    - `var ← ‘3’`: Aqui, `'3'` é um caractere literal, especificamente o caractere '3'. Essa atribuição é válida e atribuirá à variável `var` o valor do caractere '3'.

    Em resumo, `var ← 3` atribui um valor numérico inteiro à variável `var`, enquanto `var ← ‘3’` atribui o caractere '3' à variável `var`. Dependendo do contexto e dos requisitos do programa, ambas as atribuições podem ser corretas ou incorretas. Se o objetivo é armazenar o caractere '3', então `var ← ‘3’` é a atribuição correta. Se o objetivo é armazenar o valor numérico `3`, então `var ← 3` seria a atribuição correta.

## 5. Suponha um algoritmo onde há apenas a variável var, do tipo inteiro, declarada. 
Neste algoritmo, qual é a diferença entre as atribuições var ← 3 e var ← ‘3’? Ambas estão corretas? Explique.

    **RESPOSTA**

    No contexto de um algoritmo onde há apenas a variável `var` do tipo inteiro declarada, há uma diferença fundamental entre as atribuições `var ← 3` e `var ← ‘3’`.

    - `var ← 3`: Nesta atribuição, `3` é tratado como um valor numérico inteiro. A variável `var` receberá o valor inteiro `3`, que é um número.

    - `var ← ‘3’`: Aqui, `'3'` é um caractere literal, especificamente o caractere '3'. Essa atribuição tenta atribuir um caractere a uma variável do tipo inteiro, o que pode resultar em um erro de tipo em muitas linguagens de programação.

    Em resumo, `var ← 3` atribui um valor numérico inteiro à variável `var`, enquanto `var ← ‘3’` tenta atribuir um caractere à variável `var`, o que geralmente é incorreto em um contexto onde `var` é do tipo inteiro. Portanto, a atribuição `var ← 3` está correta, enquanto `var ← ‘3’` pode ser incorreta, dependendo das regras de tipagem da linguagem de programação utilizada.


## 6. Suponha um algoritmo onde há apenas a variável var, do tipo cadeia, declarada. 
Neste algoritmo, qual é a diferença entre as atribuições var ← texto e var ← ‘texto’? Ambas estão corretas? Explique.

    **RESPOSTA**

    No contexto de um algoritmo onde há apenas a variável `var` do tipo cadeia (string) declarada, há uma diferença fundamental entre as atribuições `var ← texto` e `var ← ‘texto’`.

    - `var ← texto`: Nesta atribuição, `texto` é tratado como um identificador ou variável que deve conter um valor. Se `texto` não estiver declarado ou não for uma constante definida, isso resultará em um erro ou uma operação indefinida, dependendo da linguagem de programação. Em muitas linguagens, `texto` seria considerado uma variável não declarada, resultando em um erro de compilação ou execução.

    - `var ← ‘texto’`: Aqui, `'texto'` é uma string literal, especificamente a sequência de caracteres 'texto'. Essa atribuição é válida e atribuirá à variável `var` o valor da string 'texto'.

    Em resumo, `var ← texto` tenta atribuir o valor de uma variável chamada `texto` à variável `var`, o que pode resultar em erro de compilação ou execução se `texto` não estiver definido. Por outro lado, `var ← ‘texto’` atribui explicitamente a string 'texto' à variável `var`, o que é uma atribuição correta se o objetivo for armazenar a string 'texto' na variável `var`.


## 7. Suponha um algoritmo onde há apenas a variável var, do tipo cadeia, declarada. 
Neste algoritmo, qual é a diferença entre as atribuições var ← texto e var ← “texto”? Ambas estão corretas? Explique.

    **RESPOSTA**

    No contexto de um algoritmo onde há apenas a variável `var` do tipo cadeia (string) declarada, há uma diferença fundamental entre as atribuições `var ← texto` e `var ← “texto”`.

    - `var ← texto`: Nesta atribuição, `texto` é tratado como um identificador ou variável que deve conter um valor. Se `texto` não estiver declarado ou não for uma constante definida, isso resultará em um erro ou uma operação indefinida, dependendo da linguagem de programação. Em muitas linguagens, `texto` seria considerado uma variável não declarada, resultando em um erro de compilação ou execução.

    - `var ← “texto”`: Aqui, `"texto"` é uma string literal, especificamente a sequência de caracteres "texto". Essa atribuição é válida e atribuirá à variável `var` o valor da string "texto".

    Em resumo, `var ← texto` tenta atribuir o valor de uma variável chamada `texto` à variável `var`, o que pode resultar em erro de compilação ou execução se `texto` não estiver definido. Por outro lado, `var ← “texto”` atribui explicitamente a string "texto" à variável `var`, o que é uma atribuição correta se o objetivo for armazenar a string "texto" na variável `var`.


## 8. No algoritmo abaixo, há algum erro? Explique. 
```c
algoritmo dados_da_maria 
    inteiro inteiro 
    cadeia Maria 
    caractere letra 
    real Maria 
        idade ← 23 
        idade ← 678 
        idade ← letra 
        letra ← ABC 
        letra ← A 
        letra ← 2 
fimalgoritmo
```

    **RESPOSTA**

    Sim, há alguns erros no algoritmo fornecido:

    1. A declaração `inteiro inteiro` é redundante e desnecessária. A declaração correta seria apenas `inteiro idade`.

    2. A declaração `real Maria` não é válida, pois `Maria` é declarado como uma variável do tipo cadeia (string). Parece haver uma confusão entre o nome da variável (`Maria`) e o tipo de variável (`real`). Isso precisa ser corrigido.

    3. A atribuição `idade ← letra` está tentando atribuir uma variável do tipo caractere (`letra`) a uma variável do tipo inteiro (`idade`). Isso geralmente resultará em um erro de tipo.

    4. As atribuições `letra ← ABC`, `letra ← A` e `letra ← 2` também têm problemas de tipos. `'ABC'` e `'A'` são strings, enquanto `2` é um número inteiro, e estão sendo atribuídos a uma variável do tipo caractere (`letra`). Isso geralmente resultará em erros de tipo.

    5. Falta uma palavra-chave para declarar o tipo da variável `idade`.

    ---

    Aqui está uma versão corrigida do algoritmo:

    algoritmo dados_da_maria 
        inteiro idade 
        cadeia Maria 
        caractere letra 
    inicio
        idade ← 23 
        idade ← 678 
        // idade ← letra  // Esta linha pode ser removida, pois atribui um tipo incorreto
        letra ← 'A'        // Corrigido para atribuir um caractere
        // letra ← 'ABC'  // Esta linha pode ser removida, pois atribui uma string
        // letra ← 2      // Esta linha pode ser removida, pois atribui um número inteiro
    fimalgoritmo

## 9. Multiplicação de 108 por 23
Escreva um algoritmo que multiplique 108 por 23 e mostre o resultado com uma mensagem apropriada.

    **RESPOSTA**

    algoritmo multiplicacao
        inteiro resultado
    inicio
        // Multiplica 108 por 23
        resultado ← 108 * 23

        // Mostra o resultado com uma mensagem apropriada
        escrever("O resultado da multiplicação de 108 por 23 é: ", resultado)
    fimalgoritmo

## 10. Médias
Escreva um algoritmo que imprima a média aritmética dos seguintes conjuntos de números:
- 8.9 e 7
- 4, 5 e 6
Além disso, calcule e imprima:
- A soma das duas médias
- A média das médias.

        **RESPOSTA**

        algoritmo calcular_medias
            real media1, media2, soma_medias, media_das_medias

        inicio
            // Conjunto de números: 8.9 e 7
            media1 ← (8.9 + 7) / 2

            // Conjunto de números: 4, 5 e 6
            media2 ← (4 + 5 + 6) / 3

            // Mostrando as médias aritméticas
            escrever("Média do primeiro conjunto: ", media1)
            escrever("Média do segundo conjunto: ", media2)

            // Calculando a soma das médias
            soma_medias ← media1 + media2
            escrever("Soma das médias: ", soma_medias)

            // Calculando a média das médias
            media_das_medias ← soma_medias / 2
            escrever("Média das médias: ", media_das_medias)

        fimalgoritmo

## 11. Produto e Soma
Escreva um algoritmo que leia três números inteiros \( a \), \( b \) e \( c \), calcule \( a \times b + c \) e mostre o resultado para o usuário.

    **RESPOSTA**

    algoritmo produto_soma
        inteiro a, b, c, resultado

    inicio
        // Ler os três números inteiros
        escrever("Digite o valor de a: ")
        ler(a)
        escrever("Digite o valor de b: ")
        ler(b)
        escrever("Digite o valor de c: ")
        ler(c)

        // Calcular a multiplicação de a por b e somar c
        resultado ← (a * b) + c

        // Mostrar o resultado para o usuário
        escrever("O resultado de a * b + c é: ", resultado)
    fimalgoritmo

## 12. Quadrado e Cubo
Escreva um algoritmo que leia um número inteiro e mostre o seu quadrado e seu cubo. Por exemplo, se o número de entrada é 3, a saída deve ser 9 e 27.

## 13. Quociente da Divisão
Escreva um algoritmo que leia um número inteiro e mostre o resultado do quociente (inteiro) da divisão desse número por 2 e por 3.

## 14. Conversão de Tempo
Escreva um algoritmo onde, dada uma quantidade de tempo em horas, minutos e segundos, converta-a para a quantidade equivalente em segundos.

## 15. Volume do Cilindro
Escreva um algoritmo que calcule o volume de um cilindro circular, dados o raio e altura dele. Lembrando que \( V = \pi \times r^2 \times h \), onde \( \pi = 3.14 \), \( r \) é o raio e \( h \) é a altura.

## 16. Média de Notas
Escreva um algoritmo que leia 6 notas de provas e calcule a média aritmética. Escreva uma versão onde você armazena as 6 notas em 6 variáveis diferentes e outra versão na qual você só tem uma variável para ler as notas.

## 17. Troca de Caracteres
Escreva um algoritmo que leia dois caracteres e armazene-os em duas variáveis \( c1 \) e \( c2 \). Depois disso, seu algoritmo deve trocar o caractere de \( c1 \) pelo caractere de \( c2 \) e imprimir o conteúdo de \( c1 \) e \( c2 \).

## 18. Expressão com Números Inteiros
Escreva um algoritmo que leia três números inteiros e positivos \( A \), \( B \) e \( C \) e calcule a seguinte expressão: \( D = R + \frac{S}{2} \), onde \( R = (A + B)^2 \) e \( S = (B + C)^2 \).

## 19. Cálculo do Salário Líquido
Escreva um algoritmo que recebe como entrada o nome, idade, cargo e salário bruto de um funcionário. O algoritmo deve informar o nome, a idade, o cargo, o salário bruto e o salário líquido do funcionário, considerando que:
- o salário bruto teve um reajuste de 38%;
- o funcionário deve receber uma gratificação de 20% do salário bruto;
- o salário total é descontado em 15%.

## 20. Cálculo de Tinta para Pintura
Escreva um algoritmo que, tendo como entrada três comprimentos das arestas de uma caixa (\( x \), \( y \), \( z \)), calcule e informe a quantidade de tinta necessária para pintá-la externamente e o custo total que é a soma do valor da mão de obra com o valor do material. Para resolver o exercício, considere que:
- para pintar cada metro quadrado são necessários 3 litros de tinta;
- para cada 10 metros quadrados é necessário um novo rolo de tinta que custa R$ 5,00;
- a mão de obra custa R$ 20,00 por metro quadrado;
- cada lata de tinta contém 5 litros e custa R$ 45,00.

## 21. Áreas Geométricas
Escreva um algoritmo que leia três valores: \( A \), \( B \) e \( C \). A seguir, calcule e mostre:
- a área do triângulo que tem \( A \) por base e \( C \) por altura.
- a área do círculo de raio \( C \).
- a área do trapézio que tem \( A \) e \( B \) por bases e \( C \) por altura.
- a área do quadrado que tem lado \( B \).
- a área do retângulo que tem lados \( A \) e \( B \).

## 22. Conversão de Segundos
Escreva um algoritmo que, dado um número inteiro de segundos, mostre a quantidade de horas, minutos e segundos correspondente.

## 23. Composição de Latão
Sabendo que latão é constituído de 70% de cobre e 30% de zinco, escreva um algoritmo que indique a quantidade de cada um desses componentes para se obter uma certa quantidade de latão (requerida pelo usuário).

## 24. Consumo de Combustível
Escreva um algoritmo que, dado uma quilometragem a ser percorrida, o consumo de um veículo por quilômetro rodado e o valor do combustível utilizado, calcule quantos litros são necessários para percorrer a distância informada e qual o valor gasto com esse combustível.

## 25. Número Invertido
Escreva um algoritmo que leia um número de quatro dígitos e escreva-o invertido. Por exemplo, se o número lido for 2548, o resultado será 8452. Considere que o número em questão nunca irá terminar com o dígito zero.

## 26. Tempo de Chegada
Dois carros (x e y) saem de uma mesma cidade. O carro x sai com velocidade constante de 60Km/h e o carro y com velocidade constante de 90Km/h. Escreva um algoritmo que leia uma distância (em quilômetros) e calcule quanto tempo leva para o carro mais veloz tomar essa distância do outro carro.

## 27. Divisão da Conta
Três amigos, Carlos, André e Felipe, decidiram rachar igualmente a conta de um bar. Faça um algoritmo para ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que Carlos e André não paguem centavos. Por exemplo, uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53 para Felipe.
