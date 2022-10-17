#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
 //   setlocale(LC_ALL, "Portuguese");
    printf("%4.2f\n",3456.78);
	printf("%3.2f\n",3456.78);
	printf("%3.1f\n",3456.78);
	printf("%011.3f\n",3456.78);
	system("PAUSE");
 //return 0;
}
