#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
 *  Projeto: Aplica��o para leitura de notas escolares
 *  Desenvolvedor: Felipe Ladislau
 *  Projeto do curso de Programa��o estruturada Platzi
*/

// Fun��o principal ???
int main()
{
    // Declaramos as variaveis, o nome, as 3 notas e o espa�o da m�dia.
    char nome[60];
    float nota1, nota2, nota3, media;


    // Entrada de dados, recebemos o nome do aluno, para poder responder
    printf("Digite o nome do aluno!\n");
    scanf("%s", &nome);
    // Poderia ser gets(nome);

    // Vamos receber as 3 notas em seguida
    printf("Digite em seguida as 3 notas do aluno: \n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    // Aqui calculamos a m�dia, usamos parenteses pela preced�ncia de operadores.
    media = (nota1 + nota2 + nota3) / 3;

    // Exibe o resultado final...
    printf("O aluno %s teve a media de %.2f\n", nome, media);
    return 0;
}
