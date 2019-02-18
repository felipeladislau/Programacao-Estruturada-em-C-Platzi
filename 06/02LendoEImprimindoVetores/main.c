#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
 *  Projeto: Lendo e imprimindo.
 *  Desenvolvedor: Felipe Ladislau
 *  Projeto do curso de Programação estruturada Platzi
*/

int main()
{

    int num1[10];

    char letra;
    char nome[15];


    printf("Digite o nome: ");
    gets(nome);

    printf("O nome dele(a) e %s\n\n", nome);


    for(int i=1; i<11; i++){
        printf("Digite o numero %i: ", i);
        scanf("%i", &num1[i]);
    }

    return 0;
}
