#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    float notas[3][10]; // 3 notas para 10 alunos diferentes...
    char alunos[11][11];    // Vamos armazenar os nomes dos alunos também...
    int i = 0, j=0;
    float medias[3][10];
    float soma=0;


    for(i=0; i<10; i++){

        printf("Digite o nome do aluno: ");
        gets(&alunos[i]);

        for(j=0; j<3; j++){
            printf( "Digite a nota %i do aluno: ", j+1 );
            scanf("%f", &notas[j][i]);
        }
        fflush(stdin);
    }


    for(i=0; i<10; i++){
        for(j=0; j<3; j++){
            soma += notas[j][i];
        }
        medias[j][i] = soma/3;
        soma = 0;
        printf("\n\nMedia do(a) aluno(a) %s e %.2f!", alunos[i] , medias[j][i]);
    }


    return 0;
}
