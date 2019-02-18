#include <stdio.h>
#include <stdlib.h>

/*
 *  Software para ler dados numéricos
 *  Desenvolvido por Felipe Ladislau
 *  Projeto do curso de programação estruturada Platzi
*/

int main()
{
    //Declaração de variáveis.

    short int num1 = 32767;
    unsigned short int num2 = 65535;
    int num3 = 2147483647;
    unsigned int num4 = 4294967295;
    long int num5 = 2147483647;
    unsigned long int num6 = 4294967295;

    float num7 = 192.32;
    double num8 = 982732.3213;
    long double num9 = 213123;


    // Imprime os valores correspondentes
    printf("O numero SHORT INT tem 2 bytes e pode ser negativo: %i \n", num1);
    printf("O numero UNSIGNED SHORT INT tem 2 bytes mas nao pode ser negativo: %i \n", num2);
    printf("O numero INT tem 2 ou 4 bytes (Depende do processador) e pode ser negativo: %i \n", num3);
    printf("O numero UNSIGNED INT tem 2 ou 4 bytes (Depende do processador) e nao pode ser negativo: %i \n", num4);
    printf("O numero LONG INT tem 4 bytes e pode ser negativo: %i \n", num5);
    printf("O numero UNSIGNED LONG INT tem 4 bytes e nao pode ser negativo: %i \n", num6);
    printf("O numero FLOAT tem 4 bytes e pode ter casa decimal (Ponto flutuante): %.2f \n", num7);
    printf("O numero DLOUBLE tem 8 bytes e pode ter casa decimal: %lf \n", num8);
    printf("O numero LONG DOUBLE tem 10 bytes e pode ter casa decimal: %le \n", num9); // Aponta para o ponteiro na memória


    return 0;
}
