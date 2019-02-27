#include <stdio.h>
#include <stdlib.h>


// JOGO DOS 7 ERROS!

int main()
{
    char nome;
    float nota, NOTA2, nota3, media;

    Printf("Digite o nome do aluno!\n");
    scanf("%s", &nome);

    printf("Digite em seguida as 3 notas do aluno: \n");
    scanf("%f", &nota1);
    scanf("%f", &NOTA2);
    scanf("%f", nota3);

    media = (nota1 + NOTA2 + nota3) / 3;

    printf("O aluno % s teve a media de %.2f\n", nome, media);
    return 0;
}