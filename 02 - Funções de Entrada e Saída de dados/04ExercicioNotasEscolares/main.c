#include <stdio.h>
#include <stdlib.h>


/*
 *  Software para leitura e calculo de notas escolares
 *  Desenvolvido por Felipe Ladislau
 *  Projeto do curso de programação estruturada Platzi
*/

int main()
{

    // Declaração de variaveis.
    float nota1, nota2, nota3, media;
    const int NOTA_CORTE = 8;
    char nome[15];

    // Entrada de dados
    puts("Digite o nome do aluno: ");
    gets(nome);

    fflush(stdin); //Limpa o enter da memoria

    puts ("Digite a primeira nota: ");
    scanf ("%f", &nota1);

    puts("Digite a segunda nota: ");
    scanf("%f", &nota2);

    puts("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("A media do aluno %s foi %.2f\n", nome, media);

    if( media >= NOTA_CORTE )
        printf("O aluno foi APROVADO!\n\n");
    else
        printf("O aluno foi REPROVADO!\n\n");

    return 0;
}
