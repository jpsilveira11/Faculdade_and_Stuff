#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Este � o numero quatro: %d\n",4);
	printf("%s est� a %d bilh�es de km\ndo sol\n","Saturno",2);
//	printf("%s est� a %2.1f bilh�es de km\ndo sol\n","Saturno",1.5);
	system("PAUSE");
//  return 0;
}
