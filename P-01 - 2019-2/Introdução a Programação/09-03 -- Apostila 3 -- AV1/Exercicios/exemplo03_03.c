#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int a,b,max;
    printf("Entre com dois números: \n");
	printf("O primeiro número: \n");
    scanf("%d",&a);
	printf("O segundo número: \n");
    scanf("%d",&b);
    max=(a>b)?1:0;
    printf("o valor max= %d\n",max);
	system("PAUSE");
//  return 0;
}
