#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    char nome_pai[15] ={""};
    char nome_filho[15] ={""};

    char pai[15] ={"PAI"};
    char filho[15] ={"FILHO"};
    int sair;

    setlocale(LC_ALL,"Portuguese");
    printf("Olá esse Programa tem a função de substituir Palavras de um texto\n\n");
    printf("\t\tAbaixo Veremos um texto de demostração.\n");

    printf("Declaramos aos devidos fins que o SR %s,compareça a reunião de pais que será realizado",pai);
    printf("no dia 30/02/dois miletodos, para falarmos sobre as notas do %s\n",filho);

    printf("\tAlterando os Nomes para enviar Bilhete\n");

    do{
        printf("Diga o Nome do Responsavel\n");
        fgets(nome_pai, sizeof(nome_pai),stdin);
        printf("Diga o Nome do Filho\n");
        fgets(nome_filho, sizeof(nome_filho),stdin);

        strcpy(pai,nome_pai); //origem,destino SUBSTITUI A VARIAVEL PAI POR NOME_PAI
        strcpy(filho,nome_filho);   //origem,destino

        printf("\t\t Texto Alterado\n");

        printf("Declaramos aos devidos fins que o SR: %s, compareça a reunião de pais que será realizado  ",pai);
        printf("no dia 30/02/dois miletodos, para falarmos sobre as notas do %s\n",filho);

        printf("Aperte Um para fazer um novo Modelo");

    }
     while(sair==1);

    getch();
    return 0;
}
