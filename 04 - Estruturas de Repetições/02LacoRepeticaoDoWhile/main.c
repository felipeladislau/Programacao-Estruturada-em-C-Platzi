#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
*   Programa para utilização do WHILE e DO WHILE
*   Felipe Ladislau
*/


int main()
{

    float nota1=0, nota2=0, nota3=0;
    int resposta;

    do{
        printf("Digite a primeira nota: ");
        scanf("%f",&nota1);
        printf("Digite a segunda nota: ");
        scanf("%f",&nota2);

        float media = (nota1 + nota2)/2;
        printf("Media do aluno = %.2f\n",media);

        printf("Digite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resposta);

        printf("\n\n\n\n\n\n\n\n\n");


    }while(resposta == 1);




    return 0;
}
