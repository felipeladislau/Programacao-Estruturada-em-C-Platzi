#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
 *  Projeto: Aplica��o para uso de la�os WHILE
 *  Desenvolvedor: Felipe Ladislau
 *  Projeto do curso de Programa��o estruturada Platzi
*/

int main()
{

    int contador = 1; //declarando e inicializando a vari�vel de controle
    int num1, resultado;


    while (contador <= 10){
        printf("%d ", contador);

        contador++;
    }
    printf("\n\n ------------------------------ \n\n");


    num1 = 1;
    while(num1 < 11){

        resultado = num1 % 2;

        if(resultado == 1){
            printf("O numero %d e IMPAR!", num1);
        }else{
            printf("O numero %d e PAR!", num1);
        }

        printf("\n\n");
        num1++;
    }

    return 0;
}
