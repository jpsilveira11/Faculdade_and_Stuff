#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "TADs_lineares_aloc_seq.h"

int main(void)
{setlocale(LC_ALL,"Portuguese");
    printf("---------\n");
    printf("  Lista\n");
    printf("---------\n");

    TipoLista *lista = (TipoLista *)malloc(sizeof(TipoLista));

    CriaListaVazia(lista);
    printf("%i\n", TestaListaVazia(lista));

    TipoItem e11, e12, e13, e14, e15;
    e11.chave = 42;
    e12.chave = 97;
    e13.chave = 63;
    e14.chave = 81;
    e15.chave = 14;

    InsereLista(lista, e11);
    InsereLista(lista, e12);
    InsereLista(lista, e13);
    InsereLista(lista, e14);
    InsereLista(lista, e15);

    printf("%i\n", TestaListaVazia(lista));

    ImprimeLista(lista);
    printf("\n\n");

    TipoItem e16;
    int pt = lista->primeiro;

    RemoveLista(lista, &e16, pt);
    printf("%i\n", e16.chave);

    RemoveLista(lista, &e16, pt);
    printf("%i\n", e16.chave);

    RemoveLista(lista, &e16, pt);
    printf("%i\n", e16.chave);

    printf("%i\n", TestaListaVazia(lista));

    ImprimeLista(lista);
    printf("\n\n");

free(lista);

    puts("\n//--------------------------------------------------------------//\n");
int fillList[Size],remove;
printf("Criando uma nova lista:\n");
//List *list=NewList();
List *list=(List*)calloc(1,sizeof(List));
CreateEmptyList(list);
//printf("%i\n", TestEmptyList(list));
for(int counter=0;counter<Size;counter++)
        printf("Pos. #%d:\t%d\n",counter+1,list->itens[counter].chave);

printf("\nAgora, insira os valores inteiros que irão compor essa lista:\n");
for(int counter=0;counter<Size;counter++)
    {
        printf("Valor #%d:\t",counter+1);
        scanf("%d",&fillList[counter]);
        TipoItem item;
        item.chave=fillList[counter];
        FillList(list,item);
    }
puts("\n//--------------------------------------------------------------//\n");
PrintList(list);
puts("\n//--------------------------------------------------------------//\n");
printf("Agora, insira o valor númerico que você deseja remover de todas as ocorrências dessa lista:\t");
scanf("%d",&remove);
RemoveFromList(list,remove);
puts("\n//--------------------------------------------------------------//\n");
PrintList(list);
/*for(int counter=0;counter<Size;counter++)
    printf("%d\t",FullList[counter]);*/


    //--------------------
/*
    printf("---------\n");
    printf("  Pilha\n");
    printf("---------\n");

    TipoPilha *pilha = (TipoPilha *)malloc(sizeof(TipoPilha));

    CriaPilhaVazia(pilha);
    printf("%i\n", TestaPilhaVazia(pilha));

    TipoItem e21, e22, e23, e24, e25;
    e21.chave = 49;
    e22.chave = 82;
    e23.chave = 65;
    e24.chave = 22;
    e25.chave = 74;

    InserePilha(pilha, e21);
    InserePilha(pilha, e22);
    InserePilha(pilha, e23);
    InserePilha(pilha, e24);
    InserePilha(pilha, e25);

    printf("%i\n", TestaPilhaVazia(pilha));

    ImprimePilha(pilha);
    printf("\n\n");

    TipoItem e26;

    RemovePilha(pilha, &e26);
    printf("%i\n", e26);

    RemovePilha(pilha, &e26);
    printf("%i\n", e26);

    RemovePilha(pilha, &e26);
    printf("%i\n", e26);

    printf("%i\n\n", TestaPilhaVazia(pilha));

    ImprimePilha(pilha);
    printf("\n\n");

    //--------------------

    printf("--------\n");
    printf("  Fila\n");
    printf("--------\n");

    TipoFila *fila = (TipoFila *)malloc(sizeof(TipoFila));

    CriaFilaVazia(fila);
    printf("%i\n", TestaFilaVazia(fila));

    TipoItem e31, e32, e33, e34, e35;
    e31.chave = 21;
    e32.chave = 37;
    e33.chave = 95;
    e34.chave = 63;
    e35.chave = 72;

    InsereFila(fila, e31);
    InsereFila(fila, e32);
    InsereFila(fila, e33);
    InsereFila(fila, e34);
    InsereFila(fila, e35);

    printf("%i\n", TestaFilaVazia(fila));

    ImprimeFila(fila);
    printf("\n\n");

    TipoItem e36;

    RemoveFila(fila, &e36);
    printf("%i\n", e36);

    RemoveFila(fila, &e36);
    printf("%i\n", e36);

    RemoveFila(fila, &e36);
    printf("%i\n", e36);

    printf("%i\n\n", TestaFilaVazia(fila));

    ImprimeFila(fila);
    printf("\n\n");
*/
}
