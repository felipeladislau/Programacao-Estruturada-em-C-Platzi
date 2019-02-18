#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
 *  Projeto: Declarando vetores.
 *  Desenvolvedor: Felipe Ladislau
 *  Projeto do curso de Programação estruturada Platzi
*/

int main()
{

    int num1;
    int num2[10];

    char letra;
    char nome[15];


    float notas[5] = {7, 8, 9.5, 9.9, 5.2};
    // declarando e inicializando o vetor notas

    printf("Exibindo os Valores do Vetor \n\n");
    printf("notas[0] = %.1f\n", notas[0]);
    printf("notas[1] = %.1f\n", notas[1]);
    printf("notas[2] = %.1f\n", notas[2]);
    printf("notas[3] = %.1f\n", notas[3]);
    printf("notas[4] = %.1f\n", notas[4]);


    return 0;
}
