//feito por João Pedro Espechit Silveira(20019200901) e Caio Rocha Caldas(2019200582)
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{
setlocale(LC_ALL,"Portuguese");
int vector[15],counter,oddCounter=0,oddSum=0,sum=0;
float odds;
puts("Insira 15 valores numéricos inteiros da forma que achar melhor:");
for(counter=0;counter<=14;counter++)
    {
        printf("Valor %d:",counter+1);
        scanf("%d",&vector[counter]);
        //soma de todos os valores
        sum+=vector[counter];
        //checagem dos valores impares
        if(vector[counter]%2!=0)
            {
                oddCounter++;
                oddSum=oddSum+vector[counter];
            }

    }
if(oddCounter>=1) odds=oddSum/oddCounter;
else odds=0;

printf("Ao final desse processo:\n a soma dos valores inseridos foi %d e a média dos valores ímpares é %1.2f",sum,odds);
}
