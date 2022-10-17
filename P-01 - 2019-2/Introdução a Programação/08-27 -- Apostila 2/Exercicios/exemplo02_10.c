#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    char ch;
	printf("digite uma texto qualquer (digite um ponto para sair).\n");
	do {
	ch=getchar();
	if (islower(ch)) ch = toupper(ch);
	else ch = tolower(ch);
	putchar(ch);
	} while (ch!='.');
	system("PAUSE");
//  return 0;
}
