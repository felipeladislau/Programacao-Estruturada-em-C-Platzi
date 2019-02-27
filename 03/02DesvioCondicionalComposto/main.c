#include <stdio.h>
#include <stdlib.h>

/*
 *  Software de desvio condicional composto
 *  Desenvolvido por Felipe Ladislau
 *  Projeto do curso de programa��o estruturada Platzi
*/

int main()
{

    // Declara��o de vari�veis....
    int num1 = 3;
    int num2 = 5;
    int num3 = 6;
    int num4 = 8;


    // Instru��o com IF e ELSE IF
    if(num1 > 5){
        printf("O numero 1 e maior que cinco... \n\n");
    }else if(num2 > 5){
        printf("O numero 2 e maior que cinco... \n\n");
    }else if(num3 > 5){
        printf("O numero 3 e maior que cinco... \n\n");
    }else if(num4 > 5){
        printf("O numero 4 e maior que cinco... \n\n");
    }else{
        printf("Nenhum dos numeros e maior que cinco... \n\n");
    }


    // Instru��o com m�ltiplos IF
    if(num1 > 5){
        printf("O numero 1 e maior que cinco... \n\n");
    }
    if(num2 > 5){
        printf("O numero 2 e maior que cinco... \n\n");
    }
    if(num3 > 5){
        printf("O numero 3 e maior que cinco... \n\n");
    }
    if(num4 > 5){
        printf("O numero 4 e maior que cinco... \n\n");
    }



     // Estrutura de decis�o encadeada...
    if(num1 > 0){
        if(num2 > 0){
            printf("Os numeros sao maiores que zero... \n\n");
        }
        printf("Apenas o numero um e maior que zero... \n\n");
    }

    // Instru��o com SWITCH...
    switch(num1){

        case 1:
            printf("O numero e 1... \n\n");
        break;

        case 2:
            printf("O numero e 2... \n\n");
        break;

        case 3:
            printf("O numero e 3... \n\n");
        break;

        case 4:
            printf("O numero e 4... \n\n");
        break;

        case 5:
            printf("O numero e 5... \n\n");
        break;

        default:
            printf("Nao foi possivel identificar o numero... \n\n");
    }



    return 0;
}
