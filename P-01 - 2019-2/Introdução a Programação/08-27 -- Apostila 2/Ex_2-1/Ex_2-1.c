#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
setlocale(LC_ALL, "Portuguese");
printf("Diga oi ao n�mero quatro! %d\n",4);
printf("%s est� a cerca de %1.1f B I L H � E S de Km do Sol!!!", "Saturno", 1.5);
//system("PAUSE");
//return 0
}
