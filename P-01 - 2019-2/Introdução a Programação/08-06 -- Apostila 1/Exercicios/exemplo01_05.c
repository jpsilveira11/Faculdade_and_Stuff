#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int i=1;
	printf("%d/3 é igual: %f\n",i,(float) i/3);
	system("PAUSE");
 //return 0;
}
