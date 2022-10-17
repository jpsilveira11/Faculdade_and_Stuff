#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void troca();
main()
{
    setlocale(LC_ALL, "Portuguese");
    int x=10,y=20;
    printf("O Valor inicial é x=%d y=%d\n",x,y);
    troca(&x,&y);
    printf("Agora após a troca x=%d y=%d\n",x,y);
}

void troca(a,b)
int *a,*b;
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
