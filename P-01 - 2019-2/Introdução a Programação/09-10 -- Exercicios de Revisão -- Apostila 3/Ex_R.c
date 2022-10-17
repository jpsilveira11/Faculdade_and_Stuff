#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"PORTUGUESE");
int days,loop;
printf("?\n");
scanf("%d",&days);
for(loop=1;loop<=10;loop++,days--)
{
    printf("Faltam %d dias para as F É R I A S \n",days);
}
//system("PAUSE");
//return 0
}
