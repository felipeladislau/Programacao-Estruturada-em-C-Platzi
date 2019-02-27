#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
 *  Projeto: Aplicação exercicio para uso de operadores lógicos E e OU
 *  Faça uma aplicação que calcule as proporcoes numericas de regra de tres,
 *  utilizando loop para novo calculo e conferindo as condições.
 *  Desenvolvedor: Felipe Ladislau
 *  Projeto do curso de Programação estruturada Platzi
*/
int main()
{
    int menu;
    float a, b, c, resultado;


    do{

        // Primeira execução do menu.
        printf("SISTEMA DE CALCULO DE REGRA DE TRES! \n\nDigite o numero correspondente a 100%: ");
        scanf("%f", &a);

        printf("Digite o segundo numero ou 0 para calcular o mesmo: ");
        scanf("%f", &b);

        printf("Digite o percentual ou 0 para calcular o numero: ");
        scanf("%f", &c);


        if(b==0 && c==0){
            // Não informou nenhum, erro!
        }else if(b != 0 && c != 0){
            // Informou os dois, erro!
        }else if(b == 0 || c == 0){

            if(b == 0){
                // Não informou o numero, vamos calcular o mesmo.
                b = (a*c)/100;

                printf("\n\n");
                printf("%.2f \t 100%% \n", a);
                printf("       X\n");
                printf("%.2f \t %.2f%% \n", b, c);
                printf("\n\n");

            }else if(c == 0){
                // Não informou o percentual, vamos calcular o mesmo.
                c = (b*100)/a;

                printf("\n\n");
                printf("%.2f \t 100%% \n", a);
                printf("       X\n");
                printf("%.2f \t %.2f%% \n", b, c);
                printf("\n\n");

            }
        }else{
            printf("Erro ao realizar calculo, confira os numeros e refaca o processo... \n\n");
        }



        printf("Digite 1 para calcular novamente ou 2 para sair\n");
        scanf("%d", &menu);
    }while(menu==1);


    return 0;
}
