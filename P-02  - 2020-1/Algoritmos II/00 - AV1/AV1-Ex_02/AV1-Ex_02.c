//Feito por Jo�o Pedro Espechit Silveira 2019200901
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//fun��es

int main(void)
{
setlocale(LC_ALL,"Portuguese");
struct coordinates
    {
        int x,y;
    };
struct coordinates P;

    printf("Indique um valor inteiro para a posi��o do eixo x(horizontal): ");
    scanf("%d",&P.x);
    printf("Indique um valor inteiro para a posi��o do eixo y(vertical): ");
    scanf("%d",&P.y);
    printf("//-------------------------------------------------------------------------------------------------------//\n");
    printf("O ponto P demarcado pelo usu�rio se encontra nas coordenadas %d,%d(x,y).",P.x,P.y);
}
