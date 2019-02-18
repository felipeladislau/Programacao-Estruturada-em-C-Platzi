#include <stdio.h>
#include <stdlib.h>

/*
 *  Software para trabalhar com operadores
 *  Desenvolvido por Felipe Ladislau
 *  Projeto do curso de programação estruturada Platzi
*/

int main()
{
    // Declaração de variáveis
    int valor1, valor2;
    int resp_soma, resp_subtracao, resp_multiplicacao;
    float resp_divisao, rest_divisao; // Precisam ser float para caso de casas decimais

    // Imprime o cabeçalho
    printf("Testando operadores aritmeticos\n\n");

    // Recebe dois valores numericos inteiros
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite outro valor: ");
    scanf("%d", &valor2);

    // Faz todas as operações e imprime na tela.
    resp_soma = valor1 + valor2;
    printf("\nSoma = %d", resp_soma);

    resp_subtracao = valor1 - valor2;
    printf("\nSubtracao = %d", resp_subtracao);

    resp_multiplicacao = valor1 * valor2;
    printf("\nMultiplicacao = %d", resp_multiplicacao);

    resp_divisao = valor1 / valor2;
    printf("\nDivisao = %.2f", resp_divisao);

    rest_divisao = valor1 % valor2;
    printf("\nResto da Divisao = %.2f\n", rest_divisao);

    return 0;
}
