#include <stdio.h>
#include <stdlib.h>
#include<conio.h>


//declara��o de vari�veis globais
float media, nota1, nota2;
//prot�tipo da fun��o entrada
void entrada(void);


// ---------------- fun�ao main()-------------------
int main(){
  //vari�vel local
  char resposta;

  do{
    //chamada da fun��o p/ entrada das notas
    entrada();

    //usando vari�veis globais: media,nota1,nota2
    media = (nota1 + nota2) / 2;

    printf("\nMedia do aluno: %.2f\n", media);

    printf("\nDeseja calcular outra media? (s/n)");
    fflush(stdin);
    scanf("%c",&resposta);
  }
  while(resposta == 's');

  return(0);
}
// --------- fim da fun��o main() -----


//fun��o entrada de dados
//usa as vari�veis globais nota1 e nota2
void entrada(void)
{
  printf("\nDigite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  return;
}
