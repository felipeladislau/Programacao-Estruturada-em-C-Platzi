#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *  Software para ler caracteres
 *  Desenvolvido por Felipe Ladislau
 *  Projeto do curso de programa��o estruturada Platzi
*/

int main()
{
    // Em C a variavel CHAR l� um caractere, para lermos mais precisamos de um
    // vetor de caracteres, onde cada espa�o de mem�ria ir� ler um em sequ�ncia.


    // Declaramos as variaveis e seus tamanhos
    char letra, nome[10], frase[64];

    // Entrada de dados
    printf("Digite uma letra: \n");
    scanf("%c", &letra);

    fflush(stdin); //Limpa o enter da memoria

    printf("\n\nDigite um nome: \n");
    gets(nome);

    fflush(stdin); //Limpa o enter da memoria

    printf("\n\nDigite uma frase: \n");
    gets(frase);

    // Impress�o dos dados lidos.
    printf("Letra %c | Nome %s | Frase %s", letra, nome, frase);




    // MODELO DE IMPRESS�O DA TABELA ASCII
    /*
    char c;
    int i;
    printf("Usando char\n");
    for (c = 32; c < 127; c++)
    printf("Pos %d: char %c \t", c, c);

    printf("\n\nUsando int\n");
    for (i = 32; i < 127; i++)
    printf("Pos %d: char %c \t", i, i);
    */

    return 0;
}
