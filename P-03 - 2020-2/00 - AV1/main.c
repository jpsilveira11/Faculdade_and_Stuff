#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include "TADs_lineares_aloc_enc.h"
#define Size 51

TipoFila *le_expressao(char *exp);
void imprime_fila_char(TipoFila *line);
int avalia_expressao(TipoFila *exp);
void Shutdown(int exit_code);

void main(void)
{
setlocale(LC_ALL,"");
puts("//--------------------------------------------------------------------------------------------------------------------//");
puts("//=======================================================AV1==========================================================//");
puts("//--------------------------------------------------------------------------------------------------------------------//\n");

char structure[Size];
puts("Monte a estrutura da expressão:\nObs. #1: Letras de 'A' à 'Z' representarão números\nObs. #2: Caracteres como 'ç' não são válidos e letras repetidas não contarão como um mesmo algarismo.\nObs. #3: '+, -, * e /' representarão operações de soma, subtração, multiplicação e divisão.\nObs. #4: Insira '_' para finalizar essa etapa da operação.\nObs. #5: Valores fracionários serão arredondados para menos, se positivos, e para mais, se negativos.\nObs. #6: Máx. de 50 itens.\n");
for(int counter=0;counter<Size;counter++)
    {
        if(counter==50)
            {
                structure[counter]='_';
                break;
            }
        printf("Item #%d:\t",counter+1);
        scanf(" %c",&structure[counter]);
        if(structure[counter]!='A'&&structure[counter]!='B'&&structure[counter]!='C'&&structure[counter]!='D'&&structure[counter]!='E'&&structure[counter]!='F'&&structure[counter]!='G'&&structure[counter]!='H'&&structure[counter]!='I'&&structure[counter]!='J'&&structure[counter]!='K'&&structure[counter]!='L'&&structure[counter]!='M'&&structure[counter]!='N'&&structure[counter]!='O'&&structure[counter]!='P'&&structure[counter]!='Q'&&structure[counter]!='R'&&structure[counter]!='S'&&structure[counter]!='T'&&structure[counter]!='U'&&structure[counter]!='V'&&structure[counter]!='W'&&structure[counter]!='X'&&structure[counter]!='Y'&&structure[counter]!='Z'&&structure[counter]!='a'&&structure[counter]!='b'&&structure[counter]!='c'&&structure[counter]!='d'&&structure[counter]!='e'&&structure[counter]!='f'&&structure[counter]!='g'&&structure[counter]!='h'&&structure[counter]!='i'&&structure[counter]!='j'&&structure[counter]!='k'&&structure[counter]!='l'&&structure[counter]!='m'&&structure[counter]!='n'&&structure[counter]!='o'&&structure[counter]!='p'&&structure[counter]!='q'&&structure[counter]!='r'&&structure[counter]!='s'&&structure[counter]!='t'&&structure[counter]!='u'&&structure[counter]!='v'&&structure[counter]!='w'&&structure[counter]!='x'&&structure[counter]!='y'&&structure[counter]!='z'&&structure[counter]!='+'&&structure[counter]!='-'&&structure[counter]!='*'&&structure[counter]!='/'&&structure[counter]!='_')
            Shutdown(2);
        if(structure[counter]=='_')
            break;
    }
//system("cls");
//char structure[]={'A','B','C','D','/','E','-','*','+'};
int result;
printf("\nCriando estruturas...\n\n");
TipoFila *line=(TipoFila*)malloc(sizeof(TipoFila));
    line=le_expressao(structure);
    printf("Fila da operação: ");
    imprime_fila_char(line);
//system("cls");
    printf("\n\nExecutando operação...\n\n");
    result=avalia_expressao(line);
    printf("\nO resultado dessa operação equivale a %d.",result);
    free(line);
Shutdown(0);

}
TipoFila *le_expressao(char *exp)
{
TipoFila *Line=(TipoFila*)malloc(sizeof(TipoFila));
    CriaFilaVazia(Line);
    if(TestaFilaVazia(Line)!=1)
        Shutdown(1);
TipoItem item;
int counter=0;
while(exp[counter]!='_')
    {
        item.chave=exp[counter];
        InsereFila(Line,item);
        counter++;
    }
return Line;
}
void imprime_fila_char(TipoFila *line)
{
TipoCelula *aux = line->frente->proximo;
    while (aux != NULL)
    {
        printf("%c ", aux->item.chave);
        aux = aux->proximo;
    }
}
int avalia_expressao(TipoFila *exp)
{
TipoPilha *pile=(TipoPilha*)malloc(sizeof(TipoPilha));
CriaPilhaVazia(pile);
if(TestaPilhaVazia(pile)!=1)
    Shutdown(1);
int number,op1,op2;
TipoItem item,finalItem,item1,item2,remove,result;
TipoCelula *aux=exp->frente->proximo;
while(aux!=NULL)
    {
        if(aux->item.chave=='_')
            break;
        else if(aux->item.chave!='+'&&aux->item.chave!='-'&&aux->item.chave!='*'&&aux->item.chave!='/')
            {
                printf("Insira o valor de '%c':\t",aux->item.chave);
                scanf("%d",&number);
                item.chave=number;
                InserePilha(pile,item);
            }else{
                RemovePilha(pile,&remove);
                item1=remove;
                op1=item1.chave;
                RemovePilha(pile,&remove);
                item2=remove;
                op2=item2.chave;
                switch(aux->item.chave)
                {
                case '+':
                    number=op2+op1;
                break;

                case '-':
                    number=op2-op1;
                break;

                case '*':
                    number=op2*op1;
                break;

                case '/':
                    number=op2/op1;
                break;
                }
            finalItem.chave=number;
            InserePilha(pile,finalItem);
            }
        aux=aux->proximo;
    }
    RemovePilha(pile,&result);
return result.chave;
}
void Shutdown(int exit_code)
{
puts("\n//--------------------------------------------------------------------------------------------------------------------//\n");
    switch(exit_code)
    {
        case 0:
            printf("Operação bem sucedida.\nFinalizando...\n");
            exit(exit_code);
        break;

        case 1:
            printf("Erro: uma ou mais lista(s)/pilha(s)/fila(s) não pôde/puderam ser criada(s).\nFinalizando...\n");
            exit(exit_code);
        break;

        case 2:
            printf("Erro: caracter inválido.\nFinalizando...");
            exit(1);
        break;

        default:
            printf("Erro desconhecido.\nFinalizando...\n");
            exit(1);
        break;
    }
}
