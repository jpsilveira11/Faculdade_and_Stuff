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
/* A variável i na função linha não é reconhecida pela função main.*/
}
