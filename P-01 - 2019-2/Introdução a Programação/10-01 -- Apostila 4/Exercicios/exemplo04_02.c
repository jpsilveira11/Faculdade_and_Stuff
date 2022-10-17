#include <stdio.h>
#include <stdlib.h>

int elevado();

int main()
{
int b,e;
printf("Digite a base x : ");
scanf("%d",&b);
printf("Digite o expoente y : ");
scanf("%d",&e);
printf("valor = %d\n",elevado(b,e));
}

int elevado(base,expoente)
int base,expoente;
{
int i;
if (expoente<0) return;
i=1;
for(;expoente;expoente--)i=base*i;
return i;
}
