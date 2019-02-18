#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
 *  Projeto: Aplicação para uso de laços DO WHILE
 *  Desenvolvedor: Felipe Ladislau
 *  Projeto do curso de Programação estruturada Platzi
*/

int main()
{

    float nota1=0,nota2=0,media=0;
    int resp;

    do{
        printf("Digite a primeira nota: ");
        scanf("%f",&nota1);
        printf("Digite a segunda nota: ");
        scanf("%f",&nota2);

        media = (nota1 + nota2)/2;
        printf("Media do aluno = %.2f\n",media);

        printf("Digite 1 para continuar ou 2 para sair\n");
        scanf("%d", &resp);

    }while (resp==1);

    return 0;
}
