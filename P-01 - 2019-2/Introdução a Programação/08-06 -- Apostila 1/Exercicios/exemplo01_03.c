#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese")
    int x=0;
	printf("x= %d\n",x++);
	//x ser� incrementado na pr�xima linha
	printf("x= %d\n",x);
	//x agora foi incrementado
	printf("x= %d\n",++x);
	//x ser� incrementado ainda na pr�pria linha
	printf("x= %d\n",x);
	system("PAUSE");
 //return 0;
}
