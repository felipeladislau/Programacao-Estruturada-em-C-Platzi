#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float salarios[10], media = 0, minimo=0, maximo=0;
    int posi_min, posi_max;
    int i=0;

    for(i = 0; i < 10; i++){
        printf("Digite o salario, somente numeros e pontos: \n");
        scanf("%f", &salarios[i]);
    }

    printf("\n\n----------- RESULTADOS -----------\n\n");

    for(i = 0; i < 10; i++){
        media += salarios[i];

        if( salarios[i] < minimo || minimo == 0){
            minimo = salarios[i];
            posi_min = i;
        }


        if( salarios[i] > maximo ){
            maximo = salarios[i];
            posi_max = i;
        }

    }

    media = media / (i+1);

    printf("\nMedia dos 10 numeros      : %.2f", media);
    printf("\nValor minimo na posicao %i: %.2f", posi_min, minimo);
    printf("\nValor maximo na posicao %i: %.2f", posi_max, maximo);

    return 0;
}
