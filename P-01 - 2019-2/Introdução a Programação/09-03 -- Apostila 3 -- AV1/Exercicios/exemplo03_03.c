#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int a,b,max;
    printf("Entre com dois n�meros: \n");
	printf("O primeiro n�mero: \n");
    scanf("%d",&a);
	printf("O segundo n�mero: \n");
    scanf("%d",&b);
    max=(a>b)?1:0;
    printf("o valor max= %d\n",max);
	system("PAUSE");
//  return 0;
}
