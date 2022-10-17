#include <stdio.h>
#include <locale.h>
#include<time.h>
#include "TAD_arvore_binaria_busca.h"
#define MAX_RANDOM 101

int isZero(int check);
int itsOdds(int check);
int repeated(int array[],int check,int Size);
void sort(int array[],int Size);

void main(void)
{
    setlocale(LC_ALL, "");

    printf("---------------------------\n");
    printf("  Árvore Binária de Busca\n");
    printf("---------------------------\n");

    TipoCelula **arvore1 = (TipoCelula **)malloc(sizeof(TipoCelula *));

    printf("\nCriação da árvore vazia\n");
    CriaArvoreBinariaBuscaVazia(arvore1);
    printf("\nVerificação se a árvore criada é vazia -> %i\n", TestaArvoreBinariaBuscaVazia(arvore1));

    TipoItem item1_1, item1_2, item1_3, item1_4, item1_5, item1_6, item1_7, item1_8, item1_9;
    item1_1.chave = 6;
    item1_2.chave = 1;
    item1_3.chave = 8;
    item1_4.chave = 5;
    item1_5.chave = 7;
    item1_6.chave = 9;
    item1_7.chave = 3;
    item1_8.chave = 2;
    item1_9.chave = 4;

    InsereArvoreBinariaBusca(arvore1, item1_1);
    InsereArvoreBinariaBusca(arvore1, item1_2);
    InsereArvoreBinariaBusca(arvore1, item1_3);
    InsereArvoreBinariaBusca(arvore1, item1_4);
    InsereArvoreBinariaBusca(arvore1, item1_5);
    InsereArvoreBinariaBusca(arvore1, item1_6);
    InsereArvoreBinariaBusca(arvore1, item1_7);
    InsereArvoreBinariaBusca(arvore1, item1_8);
    InsereArvoreBinariaBusca(arvore1, item1_9);

    printf("\nImpressão da árvore após a inclusão dos nós\n\n");
    ImprimeArvoreBinariaBusca(arvore1, 0);

    int chave1_1 = 7;
    TipoItem *item1_10 = NULL;
    item1_10 = BuscaArvoreBinariaBusca(arvore1, chave1_1);
    printf("\nBusca por um nó existente na árvore (chave 7) -> %i\n", item1_10->chave);

    printf("\nRemoção de um nó da árvore (chave 1)\n\n");
    RemoveArvoreBinariaBusca(arvore1, item1_2);
    ImprimeArvoreBinariaBusca(arvore1, 0);

    printf("\nRemoção de um nó da árvore (chave 9)\n\n");
    RemoveArvoreBinariaBusca(arvore1, item1_6);
    ImprimeArvoreBinariaBusca(arvore1, 0);

    printf("\nRemoção de um nó da árvore (chave 8)\n\n");
    RemoveArvoreBinariaBusca(arvore1, item1_3);
    ImprimeArvoreBinariaBusca(arvore1, 0);

    printf("\nRemoção de um nó da árvore (chave 6)\n\n");
    RemoveArvoreBinariaBusca(arvore1, item1_1);
    ImprimeArvoreBinariaBusca(arvore1, 0);

    int chave1_2 = 9;
    TipoItem *item11 = NULL;
    printf("\nBusca por um nó inexistente na árvore (chave 9)\n");
    item11 = BuscaArvoreBinariaBusca(arvore1, chave1_2);

    printf("\nInserção de um nó existente na árvore (chave 3)\n");
    InsereArvoreBinariaBusca(arvore1, item1_7);

    printf("\nRemoção de um nó inexistente na árvore (chave 8)\n");
    RemoveArvoreBinariaBusca(arvore1, item1_3);

    printf("\n---------\n");
    printf("AV3 - Q4\n");
    printf("---------\n");

int Size;
    printf("Quantos números aleatórios você deseja gerar? ");
    scanf("%d",&Size);

int randomArray[Size],aux;
printf("\nValores gerados: ");
srand(time(NULL));

    for(int counter=0;counter<Size;counter++)
        {
            aux=rand()%MAX_RANDOM;
            while(repeated(randomArray,aux,Size)||isZero(aux))
                aux=rand()%MAX_RANDOM;
            randomArray[counter]=aux;
            printf("%d ",randomArray[counter]);
        }

    printf("\n\n");

TipoItem item;
TipoCelula **Tree=(TipoCelula**)malloc(sizeof(TipoCelula*));
CriaArvoreBinariaBuscaVazia(Tree);

for(int counter=0;counter<Size;counter++)
    {
        item.chave=randomArray[counter];
        InsereArvoreBinariaBusca(Tree,item);
    }

ImprimeArvoreBinariaBusca(Tree,0);

sort(randomArray,Size);

for(int counter=0;counter<Size;counter++)
    {
        if(itsOdds(randomArray[counter]))
            {
                item.chave=randomArray[counter];
                if(!TestaArvoreBinariaBuscaVazia(Tree))
                    RemoveArvoreBinariaBusca(Tree,item);
            }
    }
printf("\n\nÁrvore Binária de Busca após a remoção das chaves ímpares:\n");
ImprimeArvoreBinariaBusca(Tree,0);
}

int isZero(int check)
{
    if(check==0)
        return 1;
    else
        return 0;
}
int itsOdds(int check)
{
    if(check%2!=0)
        return 1;
    else
        return 0;
}
int repeated(int array[],int check, int Size)
{
for(int counter=0;counter<Size;counter++)
    {
        if(array[counter]==check)
            return 1;
        if(array[counter+1]==NULL)
            break;
    }
return 0;
}
void sort(int array[],int Size)
{
int aux;
    for(int counter=0;counter<Size-1;counter++)
        {
            int min=counter;
            for(int newCounter=counter+1;newCounter<Size;newCounter++)
                {
                    if(array[newCounter]<array[min])
                        min=newCounter;
                }
            if(counter!=min)
                {
                    aux=array[counter];
                    array[counter]=array[min];
                    array[min]=aux;
                }
        }
}
