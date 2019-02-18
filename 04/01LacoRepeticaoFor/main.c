#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
 *  Projeto: Aplicação para uso de laços FOR
 *  Desenvolvedor: Felipe Ladislau
 *  Projeto do curso de Programação estruturada Platzi
*/

int main()
{

    int contador;
    int num1, num2, result;

    /*
    for(contador = 1; contador <= 10; contador++){
        printf("%d ", contador);
    }

    getch();
    */


    for( num1 = 1; num1 < 11; num1++ ){
        for( num2 = 1; num2 < 11; num2++ ){
            result = num1 * num2;
            printf("%d X %d = %d \t", num1, num2, result);
        }
        printf("\n");
    }

    return 0;
}
