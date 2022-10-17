#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
#include "TAD_arvore_binaria_aloc_enc.h"

void Shutdown(int exit_code);

void main(void)
{
    setlocale(LC_ALL, "");

    printf("------------------\n");
    printf("  Árvore Binária\n");
    printf("------------------\n");

    TipoArvore **arvore_01 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_02 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_03 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_04 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_05 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_06 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_07 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_08 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_09 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_10 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_11 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_12 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_13 = (TipoArvore **)malloc(sizeof(TipoArvore *));

    CriaArvoreBinariaVazia(arvore_01);
    printf("\n%i", TestaArvoreBinariaVazia(arvore_01));

    CriaArvoreBinariaVazia(arvore_02);
    printf("\n%i", TestaArvoreBinariaVazia(arvore_02));

    //sub-árvore D
    CriaArvoreBinariaVazia(arvore_03);
    TipoItem e1;
    e1.chave = 'd';
    CriaArvoreBinaria(e1, arvore_03, arvore_01, arvore_02);
    printf("\n%i", TestaArvoreBinariaVazia(arvore_03));

    CriaArvoreBinariaVazia(arvore_04);
    printf("\n%i", TestaArvoreBinariaVazia(arvore_04));

    CriaArvoreBinariaVazia(arvore_05);
    printf("\n%i", TestaArvoreBinariaVazia(arvore_05));

    //sub-árvore E
    CriaArvoreBinariaVazia(arvore_06);
    TipoItem e2;
    e2.chave = 'e';
    CriaArvoreBinaria(e2, arvore_06, arvore_04, arvore_05);
    printf("\n%i", TestaArvoreBinariaVazia(arvore_06));

    CriaArvoreBinariaVazia(arvore_07);
    printf("\n%i", TestaArvoreBinariaVazia(arvore_07));

    CriaArvoreBinariaVazia(arvore_08);
    printf("\n%i", TestaArvoreBinariaVazia(arvore_08));

    //sub-árvore F
    CriaArvoreBinariaVazia(arvore_09);
    TipoItem e3;
    e3.chave = 'f';
    CriaArvoreBinaria(e3, arvore_09, arvore_07, arvore_08);
    printf("\n%i", TestaArvoreBinariaVazia(arvore_09));

    CriaArvoreBinariaVazia(arvore_10);
    printf("\n%i", TestaArvoreBinariaVazia(arvore_10));

    //sub-árvore B
    CriaArvoreBinariaVazia(arvore_11);
    TipoItem e4;
    e4.chave = 'b';
    CriaArvoreBinaria(e4, arvore_11, arvore_10, arvore_03);
    printf("\n%i", TestaArvoreBinariaVazia(arvore_11));

    //sub-árvore C
    CriaArvoreBinariaVazia(arvore_12);
    TipoItem e5;
    e5.chave = 'c';
    CriaArvoreBinaria(e5, arvore_12, arvore_06, arvore_09);
    printf("\n%i", TestaArvoreBinariaVazia(arvore_12));

    //árvore A
    CriaArvoreBinariaVazia(arvore_13);
    TipoItem e6;
    e6.chave = 'a';
    CriaArvoreBinaria(e6, arvore_13, arvore_11, arvore_12);
    printf("\n%i", TestaArvoreBinariaVazia(arvore_13));

    int s = PertenceArvoreBinaria(arvore_13, e3);
    printf("\n%i", s);

    printf("\n");
    ImprimeArvoreBinaria(arvore_13, 0);

    printf("\n");
    PercorreArvoreBinariaPreOrdem(arvore_13);
    printf("\n");
    PercorreArvoreBinariaOrdemSimetrica(arvore_13);
    printf("\n");
    PercorreArvoreBinariaPosOrdem(arvore_13);
    printf("\n");

    PercorreArvoreBinariaLargura(arvore_13);
    printf("\n");

    PercorreArvoreBinariaProfundidade(arvore_13);
    printf("\n");

    //*arvore_12 = LiberaArvoreBinaria(arvore_12);

    printf("\n");
    ImprimeArvoreBinaria(arvore_13, 0);

    int h = CalculaAlturaArvoreBinaria(arvore_13);
    printf("\n%i", h);

//---------------------------------------------------//

   printf("\n\n------------------\n");
    printf("  Atividade:\n");
    printf("------------------\n\n");

int node,height;
TipoArvore **tree=(TipoArvore**)malloc(sizeof(TipoArvore*));
CriaArvoreBinariaVazia(tree);

printf("Selecione um nó entre 1 e 13 cuja altura você deseja calcular: ");
scanNode:
scanf("%d",&node);
if(node>13||node<1)
    {
        printf("Nó inválido, tente novamente: ");
        goto scanNode;
    }
printf("\n");
printf("\tÁrvore #%d:\n\n",node);
switch(node)
    {
    case 1:
        ImprimeArvoreBinaria(arvore_01,0);
        height=NodeHeight(arvore_01);
    break;

    case 2:
        ImprimeArvoreBinaria(arvore_02,0);
        height=NodeHeight(arvore_02);
    break;

    case 3:
        ImprimeArvoreBinaria(arvore_03,0);
        height=NodeHeight(arvore_03);
    break;

    case 4:
        ImprimeArvoreBinaria(arvore_04,0);
        height=NodeHeight(arvore_04);
    break;

    case 5:
        ImprimeArvoreBinaria(arvore_05,0);
        height=NodeHeight(arvore_05);
    break;

    case 6:
        ImprimeArvoreBinaria(arvore_06,0);
        height=NodeHeight(arvore_06);
    break;

    case 7:
        ImprimeArvoreBinaria(arvore_07,0);
        height=NodeHeight(arvore_08);
    break;

    case 8:
        ImprimeArvoreBinaria(arvore_08,0);
        height=NodeHeight(arvore_08);
    break;

    case 9:
        ImprimeArvoreBinaria(arvore_09,0);
        height=NodeHeight(arvore_09);
    break;

    case 10:
        ImprimeArvoreBinaria(arvore_10,0);
        height=NodeHeight(arvore_10);
    break;

    case 11:
        ImprimeArvoreBinaria(arvore_11,0);
        height=NodeHeight(arvore_11);
    break;

    case 12:
        ImprimeArvoreBinaria(arvore_12,0);
        height=NodeHeight(arvore_12);

    break;

    case 13:
        ImprimeArvoreBinaria(arvore_13,0);
        height=NodeHeight(arvore_13);
    break;

    default:
        Shutdown(1);
    break;
    }
printf("\n\nAltura do nó #%d: %d",node,height);
//exit(0);
Shutdown(0);
//exit(0);
}

void Shutdown(int exit_code)
{
    puts("\n\n//------------------------------------------------------------------------------------------------//\n");
    switch(exit_code)
    {
    case 0:
        puts("Operação bem sucedida, finalizando...");
        exit(exit_code);
    break;

    case 1:
        puts("Erro, árvore não existe, finalizando...");
        exit(exit_code);
    break;

    default:
        puts("Erro desconhecido, finalizando...");
        exit(1);
    break;
    }
}
