#include <stdio.h>
#include <locale.h>
#include "TAD_arvore_binaria_aloc_enc.h"

void percorreA(TipoArvore **raiz);
void percorreB(TipoArvore **raiz);

void main(void)
{
    setlocale(LC_ALL, "");

    /*printf("------------------\n");
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
    printf("\n%i", h);*/

    printf("------------------\n");
    printf("     AV3 - Q3\n");
    printf("------------------\n");

    TipoItem item;
    TipoArvore **emptyTree=(TipoArvore**)malloc(sizeof(TipoArvore*));
    CriaArvoreBinariaVazia(emptyTree);

    TipoArvore **tree_H=(TipoArvore**)malloc(sizeof(TipoArvore*));
    TipoArvore **tree_I=(TipoArvore**)malloc(sizeof(TipoArvore*));
    TipoArvore **tree_E=(TipoArvore**)malloc(sizeof(TipoArvore*));

    CriaArvoreBinariaVazia(tree_H);
    CriaArvoreBinariaVazia(tree_I);
    CriaArvoreBinariaVazia(tree_E);

    item.chave='H';
    CriaArvoreBinaria(item,tree_H,emptyTree,emptyTree);
    item.chave='I';
    CriaArvoreBinaria(item,tree_I,emptyTree,emptyTree);
    item.chave='E';
    CriaArvoreBinaria(item,tree_E,tree_H,tree_I);

    TipoArvore **tree_F=(TipoArvore**)malloc(sizeof(TipoArvore*));
    TipoArvore **tree_C=(TipoArvore**)malloc(sizeof(TipoArvore*));

    CriaArvoreBinariaVazia(tree_F);
    CriaArvoreBinariaVazia(tree_C);

    item.chave='F';
    CriaArvoreBinaria(item,tree_F,emptyTree,emptyTree);
    item.chave='C';
    CriaArvoreBinaria(item,tree_C,tree_E,tree_F);


    TipoArvore **tree_G=(TipoArvore**)malloc(sizeof(TipoArvore*));
    TipoArvore **tree_D=(TipoArvore**)malloc(sizeof(TipoArvore*));
    TipoArvore **tree_B=(TipoArvore**)malloc(sizeof(TipoArvore*));

    CriaArvoreBinariaVazia(tree_G);
    CriaArvoreBinariaVazia(tree_D);
    CriaArvoreBinariaVazia(tree_B);

    item.chave='G';
    CriaArvoreBinaria(item,tree_G,emptyTree,emptyTree);
    item.chave='D';
    CriaArvoreBinaria(item,tree_D,emptyTree,tree_G);
    item.chave='B';
    CriaArvoreBinaria(item,tree_B,tree_D,emptyTree);

    TipoArvore **tree_A=(TipoArvore**)malloc(sizeof(TipoArvore*));

    CriaArvoreBinariaVazia(tree_A);

    item.chave='A';
    CriaArvoreBinaria(item,tree_A,tree_B,tree_C);

ImprimeArvoreBinaria(tree_A,0);
printf("\n");

percorreA(tree_A);
}

void percorreA(TipoArvore **raiz)
{
    if(!TestaArvoreBinariaVazia((*raiz)->esquerda))
        percorreB((*raiz)->esquerda);
    if(!TestaArvoreBinariaVazia((*raiz)->direita))
        percorreA((*raiz)->direita);
    printf("%c ",(*raiz)->item.chave);
}

void percorreB(TipoArvore **raiz)
{
    printf("%c ",(*raiz)->item.chave);
    if(!TestaArvoreBinariaVazia((*raiz)->esquerda))
        percorreA((*raiz)->esquerda);
    if(!TestaArvoreBinariaVazia((*raiz)->direita))
        percorreB((*raiz)->direita);
}
