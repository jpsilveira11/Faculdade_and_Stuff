#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void impdigito(int);
void main()
{
setlocale(LC_ALL, "Portuguese");
printf ("digite um número inteiro menor do que 100 para o início da impressão\n");
int num;
scanf("%d",&num);
impdigito (num);
}

void impdigito(int a)
{
int i=0, t=100;

if (a > t) {printf("O valor %d é maior dp que 100\t",a);}
	else {
        if (a%2 == 0) {
            printf ("O primeiro número par é %d e a sequência segue...\n",a);
            for (i=a+2; i <= t; i+=2)
                printf ("%d\t", i);}
        else {
            printf ("O primeiro número par é %d e ...\n",a+1);
            for (i=a+3; i <= t; i+=2)
                printf ("%d\t", i);}
	}
}
