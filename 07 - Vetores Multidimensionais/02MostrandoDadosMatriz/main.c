#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    int tabuada[11][11]; // Se for 10 temos um erro, pois vetores iniciam em 0, assim como matrizes....

    for(int i = 1; i<11; i++){
        for(int j = 1; j<11; j++){

            tabuada[i][j] = i*j;
            printf(" %i X %i = %i \t", i, j, tabuada[i][j]);
        }
        printf("\n");
    }


    // 3 niveis
    int matriz[3][3][3];

    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
           printf("%f\t", matriz[i][j]);
       }
       printf("\n");
    }




    return 0;
}
