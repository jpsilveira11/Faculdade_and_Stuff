#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    {
	char x;
	printf("1. inclusão\n");
	printf("2. alteração\n");
	printf("3. exclusão\n");
	printf(" Digite sua opção:");
	x=getchar();
	switch(x)
		{
		case '1':
			printf("escolheu inclusão\n");
			break;
		case '2':
			printf("escolheu alteração\n");
			break;
		case '3':
			printf("escolheu exclusão\n");
			break;
		default:
			printf("opção inválida\n");
		}
	}
	system("PAUSE");
//  return 0;
}
