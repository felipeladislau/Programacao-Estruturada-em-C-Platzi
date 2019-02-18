#include <stdio.h>
#include <stdlib.h>


int main(){

    FILE *pont_arq; // cria vari�vel ponteiro para o arquivo
    char palavra[20]; // vari�vel do tipo string

    //abrindo o arquivo com tipo de abertura w
    pont_arq = fopen("arquivo_palavra.txt", "w");

    //testando se o arquivo foi realmente criado
    if(pont_arq == NULL){

        printf("Erro na abertura do arquivo!");
        return 1;
    }

    printf("Escreva uma palavra para testar gravacao de arquivo: ");
    scanf("%s", palavra);

    //usando fprintf para armazenar a string no arquivo
    fprintf(pont_arq, "%s", palavra);

    //usando fclose para fechar o arquivo
    fclose(pont_arq);

    printf("Dados gravados com sucesso!\n\n\n");




    /* ****** LEITURA DE ARQUIVO ****** */

    char texto_str[20];

    //abrindo o arquivo_frase em modo "somente leitura"
    pont_arq = fopen("arquivo_palavra.txt", "r");

    //enquanto n�o for fim de arquivo o looping ser� executado
    //e ser� impresso o texto
    while(fgets(texto_str, 20, pont_arq) != NULL)
    printf("Leitura do arquivo: %s\n", texto_str);

    //fechando o arquivo
    fclose(pont_arq);


    return(0);
}
