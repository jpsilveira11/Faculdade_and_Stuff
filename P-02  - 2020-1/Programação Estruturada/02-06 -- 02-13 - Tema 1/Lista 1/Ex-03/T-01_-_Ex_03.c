#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//int ageInDays;

int daysAlive(int yOld, int mOld, int dOld);

int main()
    {
  setlocale(LC_ALL,"Portuguese");
    int ageYearsOld,ageMonth,ageDays;
        printf("Insira à seguir a sua idade exata em anos(coloque também a quantidade de meses e dias vividos após seu último aniversário):\n");
        scanf("%d\n",&ageYearsOld);
        scanf("%d\n",&ageMonth);
        scanf("%d",&ageDays);
    daysAlive(ageYearsOld,ageMonth,ageDays);
    }
int daysAlive(int yOld, int mOld, int dOld)
    {
        int ageInDays=(yOld*365)+(mOld*30)+dOld;
        printf("O seu tempo de vida em dias é de aproximadamente %d",ageInDays);
    }
