#include <stdio.h>
#include <stdlib.h>

/*
 *  Software de desvio condicional simples
 *  Desenvolvido por Felipe Ladislau
 *  Projeto do curso de programa��o estruturada Platzi
*/

int main()
{

    // Declara��o e atribui��o de variaveis.
    int num1 = 3;
    int num2 = 5;

    // Estrutura de tomada de decis�es.
    // SE o NUMERO1 � maior que ZERO.
    if(num1 > 0)
        printf("O numero 1 e maior que zero... \n\n");

    // Estrutura com IF e ELSE
    if(num1 > 3){
        printf("O numero 1 e maior que tres... \n\n");
    }else{
        printf("O numero 1 e menor que tres... \n\n");
    }

    // Estrutura de decis�o encadeada...
    if(num1 > 0){
        if(num2 > 0){
            printf("Os numeros sao maiores que zero... \n\n");
        }
        printf("Apenas o numero um e maior que zero... \n\n");
    }


    return 0;
}
