#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//int ageInDays;

int daysAlive(int yOld, int mOld, int dOld);

int main()
    {
  setlocale(LC_ALL,"Portuguese");
    int ageYearsOld,ageMonth,ageDays;
        printf("Insira � seguir a sua idade exata em anos(coloque tamb�m a quantidade de meses e dias vividos ap�s seu �ltimo anivers�rio):\n");
        scanf("%d\n",&ageYearsOld);
        scanf("%d\n",&ageMonth);
        scanf("%d",&ageDays);
    daysAlive(ageYearsOld,ageMonth,ageDays);
    }
int daysAlive(int yOld, int mOld, int dOld)
    {
        int ageInDays=(yOld*365)+(mOld*30)+dOld;
        printf("O seu tempo de vida em dias � de aproximadamente %d",ageInDays);
    }
