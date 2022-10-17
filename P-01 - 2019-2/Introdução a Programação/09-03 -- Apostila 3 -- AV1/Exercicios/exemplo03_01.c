#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int a,b;
	printf("digite dois números inteiros\n");
	printf("primeiramente o dividendo: \n");
    scanf("%d",&a);
    printf("e agora o divisor: \n");
    scanf("%d",&b);
	if (b==0) printf("divisão por zero\n");
	else printf("o valor desta divisão é %2.1f\n",(float) a/b);
//	else printf("o valor desta divisão é %d\n",a/b);
	system("PAUSE");
//  return 0;
}
