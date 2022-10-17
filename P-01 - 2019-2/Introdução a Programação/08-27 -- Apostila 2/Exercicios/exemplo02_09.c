#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    char ch;
	printf("digite uma letra minúscula : ");
	ch=getchar();
	putchar(toupper(ch));
	putchar('\n');
	system("PAUSE");
//  return 0;
}
