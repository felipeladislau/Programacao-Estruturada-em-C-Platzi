#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
 *  Projeto: Aplicação para uso de operadores lógicos E e OU
 *  Desenvolvedor: Felipe Ladislau
 *  Projeto do curso de Programação estruturada Platzi
*/


main() {

  int lado1, lado2, lado3;
  int s1, s2, s3;

  printf("Entre com o tamanho dos lados do triangulo: ");
  scanf("%d %d %d", &lado1, &lado2, &lado3);

  /* calcula o quadrado dos lados */
  s1 = lado1*lado1;
  s2 = lado2*lado2;
  s3 = lado3*lado3;

  /* testa a condicao para um triangulo reto */

    if ( lado1>0 && lado2>0 && lado3 > 0 ) {
        if (s1==(s2+s3) || s2==(s1+s2) || s2==(s1+s3) ) {
            printf("Triangulo reto!\n");
        }else{
            printf("Nao e um triangulo reto!\n");
        }
    }else{
        printf("Nao pode ser um triangulo!\n");
    }
  return 0;
}
