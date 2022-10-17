#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int linha,coluna;
	for(linha=1; linha<=24; linha++)
		{
		for(coluna=1;coluna<40;coluna++)
			printf("-");
		putchar('\n');
		}
	system("PAUSE");
//  return 0;
}
