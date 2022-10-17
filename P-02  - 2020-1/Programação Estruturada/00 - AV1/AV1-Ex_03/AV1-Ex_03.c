//Feito por João Pedro Espechit Silveira 2019200901
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define max 10

//funções

int main(void)
{
setlocale(LC_ALL,"Portuguese");
int vA[max],vB[max],vC[max];
int counter;

    for(counter=0;counter<max;counter++)
        {
            printf("Vetor A || Valor %d: ",counter+1);
            scanf("%d",&vA[counter]);
        }
    printf("//----------------------------------------------------------------------------------------------------------------//\n");
//-------------------------------------------------------------------------------------------------------------------//
    for(counter=0;counter<max;counter++)
        {
            printf("Vetor B || Valor %d: ",counter+1);
            scanf("%d",&vB[counter]);
            //vC[counter]=vA[counter]-vB[counter];
        }
    printf("//----------------------------------------------------------------------------------------------------------------//\n");
//-------------------------------------------------------------------------------------------------------------------//
    for(counter=0;counter<max;counter++)
        {
            vC[counter]=vA[counter]-vB[counter];
            printf("Valor final Nº%d: %d\n",counter+1,vC[counter]);
        }
}
