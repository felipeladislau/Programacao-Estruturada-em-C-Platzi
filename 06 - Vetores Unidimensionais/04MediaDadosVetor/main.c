#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int vetor[10];

    float resultado = 0;

    for(int i=1; i<11; i++){
        printf("Digite o numero na posicao %i: ", i);
        scanf("%i", &vetor[i]);
    }


    for(int i=1; i<11; i++){
        resultado = resultado + vetor[i];
        printf("Somando %i ao resultado %.2f\n", vetor[i], resultado);
    }

    resultado = resultado/10;
    printf("A media dos numeros e: %.2f", resultado);

    return 0;
}
