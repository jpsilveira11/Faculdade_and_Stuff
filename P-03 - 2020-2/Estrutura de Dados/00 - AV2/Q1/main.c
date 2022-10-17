#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
#include "TAD_arvore_binaria_aloc_enc.h"

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

    *arvore_12 = LiberaArvoreBinaria(arvore_12);

    printf("\n");
    ImprimeArvoreBinaria(arvore_13, 0);

    int h = CalculaAlturaArvoreBinaria(arvore_13);
    printf("\n%i", h);

    printf("\n\n------------------\n");
    printf(" AV2 - Questão 1\n");
    printf("------------------\n\n");

    TipoItem item;

    TipoArvore **EmptyTree=(TipoArvore**)malloc(sizeof(TipoArvore*));
    CriaArvoreBinariaVazia(EmptyTree);

    TipoArvore **Tree_a=(TipoArvore**)malloc(sizeof(TipoArvore*));
    TipoArvore **Tree_b=(TipoArvore**)malloc(sizeof(TipoArvore*));
    TipoArvore **Tree_ab=(TipoArvore**)malloc(sizeof(TipoArvore*));

    item.chave='a';
    CriaArvoreBinaria(item,Tree_a,EmptyTree,EmptyTree);
    item.chave='b';
    CriaArvoreBinaria(item,Tree_b,EmptyTree,EmptyTree);
    item.chave='*';
    CriaArvoreBinaria(item,Tree_ab,Tree_a,Tree_b);
    //ImprimeArvoreBinaria(Tree_ab,0);

    TipoArvore **Tree_c=(TipoArvore**)malloc(sizeof(TipoArvore*));
    TipoArvore **Tree_d=(TipoArvore**)malloc(sizeof(TipoArvore*));
    TipoArvore **Tree_cd=(TipoArvore**)malloc(sizeof(TipoArvore*));

    item.chave='c';
    CriaArvoreBinaria(item,Tree_c,EmptyTree,EmptyTree);
    item.chave='d';
    CriaArvoreBinaria(item,Tree_d,EmptyTree,EmptyTree);
    item.chave='/';
    CriaArvoreBinaria(item,Tree_cd,Tree_c,Tree_d);
    //ImprimeArvoreBinaria(Tree_cd,0);

    TipoArvore **Tree_e=(TipoArvore**)malloc(sizeof(TipoArvore*));
    TipoArvore **Tree_CDe=(TipoArvore**)malloc(sizeof(TipoArvore*));

    item.chave='e';
    CriaArvoreBinaria(item,Tree_e,EmptyTree,EmptyTree);
    item.chave='-';
    CriaArvoreBinaria(item,Tree_CDe,Tree_cd,Tree_e);
    //ImprimeArvoreBinaria(Tree_CDe,0);

    TipoArvore **FullTree=(TipoArvore**)malloc(sizeof(TipoArvore*));

    item.chave='+';
    CriaArvoreBinaria(item,FullTree,Tree_ab,Tree_CDe);
    ImprimeArvoreBinaria(FullTree,0);

    printf("\n\nPercorrendo a Árvore criada:\n");
    percorre(FullTree);
  printf("\n");
exit(0);
}

void percorre(TipoArvore **tree)
{
    if(!TestaArvoreBinariaVazia((*tree)->esquerda))
        {
            printf("( ");
            percorre((*tree)->esquerda);
        }
        printf("%c ",(*tree)->item.chave);
    if(!TestaArvoreBinariaVazia((*tree)->direita))
        {
            percorre((*tree)->direita);
            printf(") ");
        }
}
