#include <stdio.h>
#include "TADs_lineares_aloc_enc.h"

//2.3
TipoFila *transfere(TipoFila *f1, TipoFila *f2);

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
    printf("AV3 - Q2\n");
    printf("---------\n");


//2.1{
    int Insert,counter=0;
    TipoItem item;
    TipoFila *f1=(TipoFila*)malloc(sizeof(TipoFila));
    TipoFila *f2=(TipoFila*)malloc(sizeof(TipoFila));
    CriaFilaVazia(f1);
    CriaFilaVazia(f2);
    printf("\nInsira números dentro da 1ª fila(digite 0 para parar)\n");
    while(Insert!=0||Insert==NULL)
        {
            printf("Item #%d: ",counter+1);
            scanf("%d",&Insert);
            if(Insert==0)
                break;
            item.chave=Insert;
            InsereFila(f1,item);
            counter++;
        }
        printf("\n");
        Insert=NULL,counter=0;
        printf("\nAgora, insira números dentro da 2ª fila(digite 0 para parar)\n");
    while(Insert!=0||Insert==NULL)
        {
            printf("Item #%d: ",counter+1);
            scanf("%d",&Insert);
            if(Insert==0)
                break;
            item.chave=Insert;
            InsereFila(f2,item);
            counter++;
        }
//}

//2.2{
printf("\nFila 1: ");
    ImprimeFila(f1);
printf("\nFila 2: ");
    ImprimeFila(f2);
//}

//2.4{
TipoFila *f3=(TipoFila*)malloc(sizeof(TipoFila));
f3=transfere(f1,f2);
//}

//2.5{
printf("\n\nUnião das duas filas: ");
ImprimeFila(f3);
//}
}

//2.3
TipoFila *transfere(TipoFila *f1, TipoFila *f2)
{
    TipoFila *transfered=(TipoFila*)malloc(sizeof(TipoFila));
    CriaFilaVazia(transfered);
    TipoItem item;

    if(!TestaFilaVazia(transfered))
        {
            printf("Erro, não foi possível fazer o processo de união das filas.");
            return;
        }
    while(!TestaFilaVazia(f1)||!TestaFilaVazia(f2))
        {
            if(!TestaFilaVazia(f1))
                {
                    RemoveFila(f1,&item);
                    InsereFila(transfered,item);
                }
            if(!TestaFilaVazia(f2))
                {
                    RemoveFila(f2,&item);
                    InsereFila(transfered,item);
                }
        }
return transfered;
}
