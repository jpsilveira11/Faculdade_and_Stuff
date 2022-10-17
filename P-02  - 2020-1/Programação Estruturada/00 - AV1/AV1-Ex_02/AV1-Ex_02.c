//Feito por João Pedro Espechit Silveira 2019200901
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define dimension 3

//funções

int main(void)
    {
setlocale(LC_ALL,"Portuguese");
int line,column,sum[dimension],finalV[dimension],m[dimension][dimension];
//-------------------------------------------------------------------------------------------------------------------//
for(column=0;column<dimension;column++)
    {
        finalV[column]=0;
    }
//-------------------------------------------------------------------------------------------------------------------//
        for(line=0;line<dimension;line++)
            {
                //finalV[line]=0;
                for(column=0;column<dimension;column++)
                {
                    printf("Linha %d || Coluna %d: ",line+1,column+1);
                    scanf("%d",&m[line][column]);
                    sum[column]=m[line][column];
                    finalV[column]+=sum[column];
                    /*switch(column)
                        {
                        case 0:
                            sum[column]=m[line][column];
                            finalV[column]+=sum[column];
                        break;

                        case 1:
                            sum[column]=m[line][column];
                            finalV[column]+=sum[column];
                        break;

                        case 2:
                            sum[column]=m[line][column];
                            finalV[column]+=sum[column];
                        break;

                        default:
                            puts("Erro!");
                        }*/
                }
              printf("//----------------------------------------------------------------------------------------------------------------//\n");
            }
//-------------------------------------------------------------------------------------------------------------------//
printf("//----------------------------------------------------------------------------------------------------------------//\nMatriz:\n");
        for(line=0;line<3;line++)
            {for(column=0;column<3;column++)
                {
                    printf("%d ",m[line][column]);
                }
              printf("\n");
            }
printf("Soma das colunas:\n");
        //for(column=0;column<3;column++){printf("%d ",finalV[column]);}
        printf("%d %d %d",finalV[0],finalV[1],finalV[2]);
    }
