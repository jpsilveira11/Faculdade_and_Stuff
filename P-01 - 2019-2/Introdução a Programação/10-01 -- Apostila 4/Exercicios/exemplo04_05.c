#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void linha();
int main(){
    int tamanho;
    printf("Digite o tamanho: ");
    scanf("%d",&tamanho);
    linha(tamanho);
}

void linha(x)
int *x;
{
    int i;
    for(i=0;i<x;i++)putchar(95);
/* A vari�vel i na fun��o linha n�o � reconhecida pela fun��o main.*/
}
