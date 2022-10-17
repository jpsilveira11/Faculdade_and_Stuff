#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    char ch = '\0';
    for(;;) {
        printf("loop infinito\n");
        ch = getchar();     //Obtém um caractere
        if (ch=='p') break; // sai do laço
    }
    printf("você digitou p\n");
	system("PAUSE");
//  return 0;
}
