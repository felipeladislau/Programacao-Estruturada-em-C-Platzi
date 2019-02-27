#include <stdio.h>
#include <stdlib.h>

// DECLARANDO E INICIALIZANDO VARIAVEL GLOBAL
int z=10;

// DECLARANDO E INICIALIZANDO VAR EXTERNA
extern int x = 9;


int main()
{
    /*
    * A declaração de variáveis ocorre ao definir um local na memória para armazenar
    * um determinado valor, isto é uma variável.
    * Para isto utilziamos palavras reservadas, elas são especiais e não podem ser o
    * nome da variável, em C temos 32 palavras reservadas.
    *        auto       break    case     char     const     continue
    *        default    do       double   else     enum      extern
    *        float      for      goto     if       int       long
    *        register   return   short    signed   sizeof    static
    *        struct     switch   typedef  union    unsigned  void
    *        volatile   while
    *
    *   Sintaxe de criação de variáveis: const tipo_dados nome_variavel = valor_declarado;
    */




    // DECLARAÇÃO DE CONSTANTE, O VALOR NÃO PODE SER MODIFICADO
    const int a = 32;

    // DECLARANDO CHAR
    char b = 'G';

    // DEFINIÇÃO DA VARIAVEL EXTERNA, POIS JA FOI DEFINIDA
    // EM OUTRO LUGAR, FORA DA FUNÇÃO MAIN
    extern int z;



    printf("Hello World!\n");

    // IMPRIMINDO AS VARIAVEIS
    printf("Este e o valor da variavel 'a': %d\n",a);
    printf("'b' e uma variavel char. Este e seu valor %c\n",b);
    printf("Aqui estao os valores de 'x' e 'z'"
    " respectivamente: %d e %d\n",x,z);

    // VALOR EXTERNO DE X MODIFICADO
    x=2;

    // VALOR EXTERNO DE Y MODIFICADO
    z=5;

    // IMPRIMINDO OS VALORES MODIFICADOS
    printf("Aqui estao os valores de 'x' e 'z'"
    " respectivamente: %d e %d\n",x,z);


    printf("Ate logo! Nos vemos em breve. :)\n");

    return 0;
}
