#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int x;
	for (x=1; x<20; x++)
	printf("%d\n",x);
	system("PAUSE");
//  return 0;
}
