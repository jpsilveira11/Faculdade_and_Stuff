#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int x,y;
	for (x=0, y=0; x+y<100; ++x, ++y)
	printf("%d ",x+y);
	system("PAUSE");
//  return 0;
}
