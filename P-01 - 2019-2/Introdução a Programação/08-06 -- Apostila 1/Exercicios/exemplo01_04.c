#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,j;
	printf("digite dois n�meros:\n");
	scanf("%d%d",&i,&j);
	printf("%d == %d � %d\n",i,j,i==j);
	printf("%d != %d � %d\n",i,j,i!=j);
	printf("%d <= %d � %d\n",i,j,i<=j);
	printf("%d >= %d � %d\n",i,j,i>=j);
	printf("%d < %d � %d\n",i,j,i< j);
	printf("%d > %d � %d\n",i,j,j>j);
}
