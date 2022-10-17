#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int num,segredo;
	srand(time(NULL));
	segredo=rand()/100;
	printf("Qual é o numero: ");
	scanf("%d",&num);
	if (segredo==num) {
            printf("Acertou!");
            printf("\nO numero é %d\n",segredo);}
	else    if (segredo<num)
                printf("Errado, muito alto!\n");
            else printf("Errado, muito baixo!\n");
	system("PAUSE");
//  return 0;
}
