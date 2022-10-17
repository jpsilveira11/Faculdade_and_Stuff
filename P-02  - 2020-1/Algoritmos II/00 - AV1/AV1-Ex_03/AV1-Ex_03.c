//Feito por João Pedro Espechit Silveira 2019200901
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define dimension 3

//funções

int main(void)
{
setlocale(LC_ALL,"Portuguese");
int line,column,lowerValue[3];
int m[dimension][dimension];
//-------------------------------------------------------------------------------------------------------------------//
    for(line=0;line<dimension;line++){
        lowerValue[line]=0;
        for(column=0;column<dimension;column++)
            {
                printf("Linha %d || Coluna %d: ",line+1,column+1);
                scanf("%d",&m[line][column]);
                if(lowerValue[line]==0 || lowerValue[line]>=m[line][column])
                    lowerValue[line]=m[line][column];
            }
            printf("//----------------------------------------------------------------------------------------------------------------//\n");
        }
//-------------------------------------------------------------------------------------------------------------------//
    printf("\nMatriz Original:\n");
    for(line=0;line<dimension;line++)
        {for(column=0;column<dimension;column++)
            {
                printf("%d ",m[line][column]);
            }
           printf("\n");
        }
//-------------------------------------------------------------------------------------------------------------------//
    printf("Menor valor de cada linha:\n");
    for(line=0;line<dimension;line++)
        printf("%d ",lowerValue[line]);

}
