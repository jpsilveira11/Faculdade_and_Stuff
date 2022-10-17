#include <stdio.h>
#include<stdlib.h>
#include "TADs_lineares_aloc_seq.h"

//TAD lista com alocação sequencial
//cria uma lista vazia
void CriaListaVazia(TipoLista *lista)
{
    lista->primeiro = -1;
    lista->ultimo = lista->primeiro;
}

//testa se a lista é vazia
int TestaListaVazia(TipoLista *lista)
{
    return ((lista->primeiro == -1) && (lista->ultimo == -1));
}

//insere um elemento na lista
void InsereLista(TipoLista *lista, TipoItem item)
{
    if (lista->ultimo == TAM - 1)
        printf("Erro: lista cheia\n");
    else
    {
        lista->ultimo++;
        lista->itens[lista->ultimo] = item;
        if (lista->primeiro == -1)
            lista->primeiro = 0;
    }
}

//remove um elemento da lista
void RemoveLista(TipoLista *lista, TipoItem *item, int pt)
{
    int aux;

    if (TestaListaVazia(lista))
        printf("Erro: lista vazia\n");
    else if ((pt < lista->primeiro) || (pt > lista->ultimo))
        printf("Erro: posição inexistente\n");
    else
    {
        *item = lista->itens[pt];
        for (aux = pt; aux < lista->ultimo; aux++)
            lista->itens[aux] = lista->itens[aux + 1];
        lista->ultimo--;
        if (lista->ultimo == -1)
            lista->primeiro = -1;
    }
}

//imprime os elementos da lista
void ImprimeLista(TipoLista *lista)
{
    int aux;

    if (TestaListaVazia(lista))
        printf("Erro: lista vazia\n");
    else
        for (aux = lista->primeiro; aux <= lista->ultimo; aux++)
            printf("%i ", lista->itens[aux].chave);
}
//----------------------------------------//
//---------------------------------------//
//--------------------------------------//
List* NewList()
{
    List *list=(List*)calloc(1,sizeof(List));
    if(list==NULL)
        exit(1);
return;
}
void CreateEmptyList(List *list_)
{
    list_->first=-1;
    list_->last=list_->first;
}

int TestEmptyList(List *list_)
{
    return ((list_->first==-1)&&(list_->last==-1));
}

void FillList(List *list_,TipoItem item)
{
    if (list_->last==Size-1)
        printf("Erro: lista cheia\n");
    else
    {
        list_->last++;
        list_->itens[list_->last]=item;
        if (list_->first==-1)
            list_->first=0;
    }
}

void PrintList(List *list_)
{puts("Lista:");
    for (int counter=0;counter<=list_->last;counter++)
        printf("Pos. #%d:\t%d\n",counter+1,list_->itens[counter].chave);
}

void RemoveFromList(List *list_,int removal)
{
    int aux,removalCounter=0;
     if (TestEmptyList(list_))
        printf("Erro: lista vazia\n");
    else{
            for(int counter=0;counter<=list_->last;counter++)
            if(list_->itens[counter].chave==removal)
                removalCounter++;


    for(int counter=0;counter<=list_->last;counter++)
        {
            for(int counter2=0;counter2<list_->last;counter2++)
        {
            if(removal==list_->itens[counter2].chave)
                {
                    aux=list_->itens[counter2].chave;
                    list_->itens[counter2].chave=list_->itens[counter2+1].chave;
                    list_->itens[counter2+1].chave=aux;
                }
            }
        }
        list_->last=list_->last-removalCounter;
        //printf("\n\t%d\t%d\n",list_->last,removalCounter);
            if(list_->last==-1)
                list_->first=list_->last;
    }
}
