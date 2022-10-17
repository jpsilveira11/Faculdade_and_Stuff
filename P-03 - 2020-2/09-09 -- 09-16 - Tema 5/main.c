#include <stdio.h>
#include<locale.h>
#include "TADs_lineares_aloc_enc.h"

void main(void)
{setlocale(LC_ALL,"Portuguese");
/*
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
*/

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

Free(fila);
//---------------------------------------------//
int number=0,counter=0;
char op;
TipoFila *MainLine=(TipoFila*)malloc(sizeof(TipoFila));
TipoItem item;

printf("Preencher fila?[S/N]\t");
    getOP:
    scanf(" %c",&op);
    setbuf(stdin,NULL);
switch(op)
    {
        case 's':
        case 'S':
            CriaFilaVazia(MainLine);
            if(TestaFilaVazia(MainLine)!=1)
                Shutdown(1);
            puts("Preencha a fila(-1 para finalizar):");
        while(number!=-1)
            {
                printf("Pos. #%d:\t",counter+1);
                scanf("%d",&number);
                if(number!=-1)
                    {
                        item.chave=number;
                        InsereFila(MainLine,item);
                        counter++;
                    }
            }
            printf("\nFila Principal:\t");
            ImprimeFila(MainLine);
            printf("\n");
        break;

        case 'n':
        case 'N':
            Shutdown(0);
        break;

        default:
            printf("Erro, tente novamente:\t");
            goto getOP;
    }
    TipoFila *NewLine=(TipoFila*)malloc(sizeof(TipoFila));
    CriaFilaVazia(NewLine);
     if(TestaFilaVazia(NewLine)!=1)
                {
                    Free(MainLine);
                    Shutdown(2);
                }

    printf("Fila Clonada:\t");
    CopyLine(MainLine,NewLine);
    ImprimeFila(NewLine);
printf("\n");
Free(MainLine);
Free(NewLine);
Shutdown(0);
}
