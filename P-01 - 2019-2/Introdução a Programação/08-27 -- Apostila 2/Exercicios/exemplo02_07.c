#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	printf("\no n�mero � %d",num);
	printf("\no endere�o � %u\n",&num);
	system("PAUSE");
//  return 0;
}
