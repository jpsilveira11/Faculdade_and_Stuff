#include <stdio.h>
#include<stdlib.h>
#include "TADs_lineares_aloc_enc.h"

//TAD fila com alocação encadeada
//cria uma fila vazia
void CriaFilaVazia(TipoFila *fila)
{
    fila->frente = (TipoCelula *)malloc(sizeof(TipoCelula));
    fila->tras = fila->frente;
    fila->frente->proximo = NULL;
}

//testa se a fila é vazia
int TestaFilaVazia(TipoFila *fila)
{
    return (fila->frente == fila->tras);
}

//insere um elemento na fila
void InsereFila(TipoFila *fila, TipoItem item)
{
    fila->tras->proximo = (TipoCelula *)malloc(sizeof(TipoCelula));
    fila->tras = fila->tras->proximo;
    fila->tras->item = item;
    fila->tras->proximo = NULL;
}

//remove um elemento da fila
void RemoveFila(TipoFila *fila, TipoItem *item)
{
    if (TestaFilaVazia(fila))
    {
        printf("Erro: fila vazia\n");
        return;
    }
    TipoCelula *q = fila->frente;
    fila->frente = fila->frente->proximo;
    *item = fila->frente->item;
    free(q);
}

//imprime os elementos da fila
void ImprimeFila(TipoFila *fila)
{
    TipoCelula *aux = fila->frente->proximo;
    while (aux != NULL)
    {
        printf("%i ", aux->item.chave);
        aux = aux->proximo;
    }
}

void CopyLine(TipoFila *MainLine,TipoFila *NewLine)
{
TipoItem FillList;
TipoCelula *aux=MainLine->frente->proximo;
    while (aux!=NULL)
    {
        FillList=aux->item;
        NewLine->tras->proximo=(TipoCelula *)malloc(sizeof(TipoCelula));
        NewLine->tras = NewLine->tras->proximo;
        NewLine->tras->item =FillList;
        NewLine->tras->proximo=NULL;
        aux=aux->proximo;
    }
}
//---//
void Free(TipoFila *line)
{
    free(line);
}
void Shutdown(int exit_code)
{
puts("\n//----------------------------------------------------------------------//\n");
    switch(exit_code)
    {
        case 0:
            puts("Operação bem sucedida.\nFinalizando...");
            exit(exit_code);
        break;

        case 1:
            puts("Erro: Fila não pôde ser criada.\nFinalizando...");
            exit(exit_code);
        break;

        case 2:
            puts("Erro: Nova fila não pôde ser criada.\nFinalizando...");
            exit(1);
        break;

        default:
            puts("Ocorreu um erro desconhecido.\nFinalizando...");
            exit(1);
        break;
    }
}
