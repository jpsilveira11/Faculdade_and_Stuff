#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    {
	char x;
	printf("1. inclus�o\n");
	printf("2. altera��o\n");
	printf("3. exclus�o\n");
	printf(" Digite sua op��o:");
	x=getchar();
	switch(x)
		{
		case '1':
			printf("escolheu inclus�o\n");
			break;
		case '2':
			printf("escolheu altera��o\n");
			break;
		case '3':
			printf("escolheu exclus�o\n");
			break;
		default:
			printf("op��o inv�lida\n");
		}
	}
	system("PAUSE");
//  return 0;
}
