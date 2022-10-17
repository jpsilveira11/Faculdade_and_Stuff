#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Este é o numero quatro: %d\n",4);
	printf("%s está a %d bilhões de km\ndo sol\n","Saturno",2);
//	printf("%s está a %2.1f bilhões de km\ndo sol\n","Saturno",1.5);
	system("PAUSE");
//  return 0;
}
