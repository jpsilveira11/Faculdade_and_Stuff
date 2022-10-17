#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
//  setlocale(LC_ALL, "Portuguese");
    char ch;
    printf("Digite um caracter e pressione enter\n");
	ch=getchar();
	printf("O caracter digitado foi: %c\n",ch);
	system("PAUSE");
//  return 0;
}
