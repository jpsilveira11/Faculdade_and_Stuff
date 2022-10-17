#include <stdio.h>
#include<stdlib.h>
#include "TADs_lineares_aloc_enc.h"

//TAD pilha com alocação encadeada
//cria uma pilha vazia
void CriaPilhaVazia(TipoPilha *pilha)
{
    pilha->topo = (TipoCelula *)malloc(sizeof(TipoCelula));
    pilha->fundo = pilha->topo;
    pilha->topo->proximo = NULL;
}

//testa se a pilha é vazia
int TestaPilhaVazia(TipoPilha *pilha)
{
    return (pilha->topo == pilha->fundo);
}

//insere um elemento na pilha
void InserePilha(TipoPilha *pilha, TipoItem item)
{
    TipoCelula *aux = (TipoCelula *)malloc(sizeof(TipoCelula));
    pilha->topo->item = item;
    aux->proximo = pilha->topo;
    pilha->topo = aux;
}

//remove um elemento da pilha
void RemovePilha(TipoPilha *pilha, TipoItem *item)
{
    if (TestaPilhaVazia(pilha))
    {
        printf("Erro: pilha vazia\n");
        return;
    }
    TipoCelula *q = pilha->topo;
    pilha->topo = q->proximo;
    *item = q->proximo->item;
    free(q);
}

//imprime os elementos da pilha
void ImprimePilha(TipoPilha *pilha)
{
    TipoCelula *aux = pilha->topo->proximo;
    while (aux != NULL)
    {
        printf("%i ", aux->item.chave);
        aux = aux->proximo;
    }
}

void MergePile(TipoPilha *pile1, TipoPilha *pile2)
{
 TipoCelula *aux = pile1->topo->proximo;
TipoItem FillPile;
    while (aux != NULL)
    {
        FillPile.chave=aux->item.chave;
        //InserePilha(AuxPile,FillPile);
        TipoCelula *AUX=(TipoCelula*)malloc(sizeof(TipoCelula));
        pile2->topo->item=FillPile;
        AUX->proximo=pile2->topo;
        pile2->topo=AUX;
        aux=aux->proximo;
    }
    /*pilha->topo->item = item;
    aux->proximo = pilha->topo;
    pilha->topo = aux;*/
}

void Free(TipoPilha *pile)
{
    free(pile);
}
void Shutdown(int exit_code)
{
    switch(exit_code)
    {
        case 0:
            printf("Operação bem sucedida.\nFinalizando...");
            exit(exit_code);
        break;

        case 1:
            printf("Uma ou mais pilhas não puderam ser alocadas.\nFinalizando...");
            exit(exit_code);
        break;

        default:
            printf("Erro desconhecido.\nFinalizando...");
            exit(1);
        break;
    }
}
