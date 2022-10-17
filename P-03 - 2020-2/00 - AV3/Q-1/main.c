#include <stdio.h>
#include "TADs_lineares_aloc_enc.h"


void printArray(int array[],int Size);
TipoPilha *fillPile(int array[],int Size);
//2.5{
void inverte(TipoPilha *p);
//}

void main(void)
{
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

    TipoCelula *p = lista->primeiro;

    RemoveLista(lista, &e16, p);
    printf("%i\n", e16);

    RemoveLista(lista, &e16, p);
    printf("%i\n", e16);

    RemoveLista(lista, &e16, p);
    printf("%i\n", e16);

    printf("%i\n\n", TestaListaVazia(lista));

    ImprimeLista(lista);
    printf("\n\n");

    //--------------------

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

    printf("---------\n");
    printf("AV3 - Q1\n");
    printf("---------\n");

//2.1{
    int pileSize;
    printf("\n\nDefina o tamanho da pilha: ");
    scanf("%d",&pileSize);

    int array[pileSize];
    printf("\n\nAgora, preencha a pilha do tamanho informado:\n");
    for(int counter=0;counter<pileSize;counter++)
        {
            printf("Pos #%d: ",counter+1);
            scanf("%d",&array[counter]);
        }
//}

//2.2{
printf("\n");
printArray(array,pileSize);
//}

//2.3{
printf("\n");
TipoPilha *pile=(TipoPilha*)malloc(sizeof(TipoPilha));
pile=fillPile(array,pileSize);
//}

//2.4{
printf("Valores empilhados: ");
ImprimePilha(pile);
//}

//2.6{
printf("\n");
inverte(pile);
//}

//2.7{
printf("Pilha invertida: ");
ImprimePilha(pile);
printf("\n\n");
//}
}

void printArray(int array[],int Size)
{
printf("Vetor:\t[");
    for(int counter=0;counter<Size;counter++)
        {
            printf("%d",array[counter]);
            if(counter+1>=Size)
                break;
            else
                printf(", ");
        }
printf("]");
return;
}

TipoPilha *fillPile(int array[],int Size)
{
    TipoPilha *pile=(TipoPilha*)malloc(sizeof(TipoPilha));
    CriaPilhaVazia(pile);
    TipoItem item;
    if(!TestaPilhaVazia(pile))
        {
            printf("Não foi possível criar a pilha.");
            return;
        }
    for(int counter=0;counter<Size;counter++)
        {
            item.chave=array[counter];
            InserePilha(pile,item);
        }

return pile;
}

//2.5{
void inverte(TipoPilha *p)
{
TipoItem item;
TipoFila *auxLine=(TipoFila*)malloc(sizeof(TipoFila));
CriaListaVazia(auxLine);

    if(!TestaListaVazia(auxLine))
        {
            printf("Erro, não foi possível fazer o processo de inversão da pilha.");
            return;
        }

while(!TestaPilhaVazia(p))
    {
        RemovePilha(p,&item);
       InsereFila(auxLine,item);
    }
while(!TestaListaVazia(auxLine))
    {
        RemoveFila(auxLine,&item);
       InserePilha(p,item);
    }
return;
}
//}
