#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
	printf("Digite um número: ");
	scanf("%d",&num);
	printf("\no número é %d",num);
	printf("\no endereço é %u\n",&num);
	system("PAUSE");
//  return 0;
}
