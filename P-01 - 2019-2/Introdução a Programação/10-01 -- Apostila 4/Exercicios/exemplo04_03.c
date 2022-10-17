#include <stdio.h>
#include <stdlib.h>

int sqr();
main()
{
int t=10;
printf("O valor %d elevado ao quadrado = %d",t,sqr(t));
}

int sqr(x)
int x;
{
x=x*x;
return(x);
}
