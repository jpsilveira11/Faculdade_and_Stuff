#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int a,b;
	printf("digite dois n�meros inteiros\n");
	printf("primeiramente o dividendo: \n");
    scanf("%d",&a);
    printf("e agora o divisor: \n");
    scanf("%d",&b);
	if (b==0) printf("divis�o por zero\n");
	else printf("o valor desta divis�o � %2.1f\n",(float) a/b);
//	else printf("o valor desta divis�o � %d\n",a/b);
	system("PAUSE");
//  return 0;
}
