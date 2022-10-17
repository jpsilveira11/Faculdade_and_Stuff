#include <stdio.h>
#include <locale.h>
#include "TAD_arvore_binaria_busca.h"
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define MESSAGE_SIZE 31
#define PACKAGES 11

int isZero(int Packages);
int isNull(TipoItem items);
int lenghtof(TipoItem *items);
void Shuffle(TipoItem *items,int Size);
void CreateFragmentedMessage(TipoItem *items,TipoItem *FragmentedMessage,int lenght);
void printFragments(TipoItem *items,int lenght);
void Sort(TipoItem *items,int lenght);

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
    item1_1.pacote = 'F';
    item1_2.chave = 1;
    item1_2.pacote = 'A';
    item1_3.chave = 8;
    item1_3.pacote = 'H';
    item1_4.chave = 5;
    item1_4.pacote = 'E';
    item1_5.chave = 7;
    item1_5.pacote = 'G';
    item1_6.chave = 9;
    item1_6.pacote = 'I';
    item1_7.chave = 3;
    item1_7.pacote = 'C';
    item1_8.chave = 2;
    item1_8.pacote = 'B';
    item1_9.chave = 4;
    item1_9.pacote = 'D';

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

    printf("\n\n------------------\n");
    printf(" AV2 - Questão 2\n");
    printf("------------------\n\n");

//2.1
char Message[MESSAGE_SIZE];

    printf("Digite sua mensagem(Máx. %d caracteres):\n",MESSAGE_SIZE-1);
    fgets(Message,MESSAGE_SIZE,stdin);
    setbuf(stdin,NULL);
    setbuf(stdout,NULL);

//2.2
    printf("\nMensagem a ser enviada:\n");
    puts(Message);
    //printf("\n\n\n");
//printf("\nstrlen(Message)=%d\n",strlen(Message));

//2.3
TipoItem *MessageFragment=(TipoItem*)malloc((sizeof(Message)*sizeof(TipoItem)));
    for(int counter=0;counter<(strlen(Message)-1);counter++)
        {
            if(Message[counter]==NULL||Message[counter]=='\0')
                break;
            MessageFragment[counter].chave=counter;
            MessageFragment[counter].pacote=Message[counter];

        }
    //printf("\nMensagem fragmentada:\n");
    //printFragments(MessageFragment,lenghtof(MessageFragment));

//2.4
    TipoItem *items=(TipoItem*)malloc(PACKAGES*strlen(Message)*sizeof(TipoItem));
    int Packages,Position=0;
    srand(time(NULL));
    for(int counter=0;counter<(strlen(Message)-1);counter++)
        {
            if(Message[counter]==NULL)
                break;
            Packages=rand()%PACKAGES;
            while(isZero(Packages))
                    Packages=rand()%PACKAGES;
            //printf("%d ",Packages);
            for(int newCounter=0;newCounter<Packages;newCounter++)
                {
                    items[Position].chave=MessageFragment[counter].chave;
                    items[Position].pacote=MessageFragment[counter].pacote;
                    Position++;
                }
        }

//2.5 && 2.6
        Shuffle(items,lenghtof(items));
    TipoItem *FragmentedMessage=(TipoItem*)malloc((strlen(Message)*sizeof(TipoItem)));
        //printf("\nFragmentos dos pacotes:\n");
        //printFragments(items,lenghtof(items));
        printf("\nMensagem embaralhada:\n");
        CreateFragmentedMessage(items,FragmentedMessage,lenghtof(items));
        printFragments(FragmentedMessage,(strlen(Message)-1));

//2.7
printf("\nCriando Árvore Binária dos fragmentos da mensagem:\n\n");
TipoCelula **Data=(TipoCelula**)malloc(sizeof(TipoCelula*));
CriaArvoreBinariaBuscaVazia(Data);
    for(int counter=0;counter<(strlen(Message)-1);counter++)
        {
            InsereArvoreBinariaBusca(Data,FragmentedMessage[counter]);
        }

//2.8
ImprimeArvoreBinariaBusca(Data,0);
printf("\n");

//2.9
printf("\nReconstruindo a mensagem:\n");
TipoItem *RebuiltMessage=(TipoItem*)malloc(strlen(Message)*sizeof(TipoItem));
for(int counter=0;counter<=strlen(Message);counter++)
    {
        if(TestaArvoreBinariaBuscaVazia(Data))
            break;
        RemoveArvoreBinariaBusca(Data,FragmentedMessage[counter]);
        RebuiltMessage[counter]=FragmentedMessage[counter];
    }
    //printFragments(RebuiltMessage,strlen(Message)-1);
    Sort(RebuiltMessage,strlen(Message)-1);
    //printf("\nPost-Sort:\n");
//printFragments(RebuiltMessage,strlen(Message)-1);

//2.10
//printf();
char FinalMessage[strlen(Message)];
    for(int counter=0;counter<=strlen(Message);counter++)
        {
            FinalMessage[counter]=RebuiltMessage[counter].pacote;
        }
        //printf("\t");
    puts(FinalMessage);
exit(0);
}

int isZero(int Packages)
{
    if(Packages==0)
        return 1;
    else
        return 0;
}
int isNull(TipoItem items)
{
    if(items.chave==NULL&&items.pacote==NULL)
        return 1;
    else
        return 0;
}
int lenghtof(TipoItem *items)
{
int counter=0;
    while(!isNull(items[counter]))
        counter++;
return counter;
}
void Shuffle(TipoItem *items,int Size)
{
    int pos;
    TipoItem shuffler;
    for(int counter=Size-1;counter>0;counter--)
        {
            if(isNull(items[counter]))
                break;
            pos=rand()%counter;

            shuffler.chave=items[pos].chave;
            shuffler.pacote=items[pos].pacote;

            items[pos].chave=items[counter].chave;
            items[pos].pacote=items[counter].pacote;

            items[counter].chave=shuffler.chave;
            items[counter].pacote=shuffler.pacote;
        }
}
void CreateFragmentedMessage(TipoItem *items,TipoItem *FragmentedMessage,int lenght)
{
int counter,newCounter,key=0;
    for(counter=0;counter<lenght;counter++)
    {
        for(newCounter=0;newCounter<key;newCounter++)
        {
            if(items[counter].chave==FragmentedMessage[newCounter].chave)
                break;
        }
        //if(key>=strLenght)
            //break;
        if(newCounter==key)
        {
            FragmentedMessage[key].chave=items[counter].chave;
            FragmentedMessage[key].pacote=items[counter].pacote;
            key++;
        }
    }
}
void printFragments(TipoItem *items,int lenght)
{
for(int counter=0;counter<lenght;counter++)
    {
        printf("Char #%d: ",counter+1);
        printf("ID: %d || Pacote: ",items[counter].chave);
        printf(" %c",items[counter].pacote);
        printf("\n");
        //printf("#%d: %d %c\n",counter+1,items[counter].chave,items[counter].pacote);
    }
}
void Sort(TipoItem *items,int lenght)
{
TipoItem aux;
int index;
    for(int counter=0;counter<lenght-1;counter++)
        {
            index=counter;
            for(int newCounter=counter+1;newCounter<lenght;newCounter++)
                {
                    if(items[newCounter].chave<items[index].chave)
                        index=newCounter;
                }
            if(counter!=index)
                {
                    //printf(" %c",items[counter].pacote);
                    aux.chave=items[counter].chave;
                    aux.pacote=items[counter].pacote;

                    items[counter].chave=items[index].chave;
                    items[counter].pacote=items[index].pacote;

                    items[index].chave=aux.chave;
                    items[index].pacote=aux.pacote;
                }
        }
}
