#include <stdio.h>
#include <stdlib.h>

/*
 *  Software de desvio condicional simples
 *  Desenvolvido por Felipe Ladislau
 *  Projeto do curso de programação estruturada Platzi
*/

int main()
{

    // Declaração e atribuição de variaveis.
    int num1 = 3;
    int num2 = 5;

    // Estrutura de tomada de decisões.
    // SE o NUMERO1 é maior que ZERO.
    if(num1 > 0)
        printf("O numero 1 e maior que zero... \n\n");

    // Estrutura com IF e ELSE
    if(num1 > 3){
        printf("O numero 1 e maior que tres... \n\n");
    }else{
        printf("O numero 1 e menor que tres... \n\n");
    }

    // Estrutura de decisão encadeada...
    if(num1 > 0){
        if(num2 > 0){
            printf("Os numeros sao maiores que zero... \n\n");
        }
        printf("Apenas o numero um e maior que zero... \n\n");
    }


    return 0;
}
