#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
//  setlocale(LC_ALL, "Portuguese");
    printf("%d %c %x %o\n",'A','A','A','A');
    printf("%c %c %c %c\n",'A',65,0x41,0101);
//	printf("%c %c %c %c\n",'A',3393,0x41,101);
	system("PAUSE");
//  return 0;
}
