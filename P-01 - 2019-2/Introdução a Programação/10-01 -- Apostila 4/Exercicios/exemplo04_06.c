#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void func1(),func2();
int cont;
main()
{
    setlocale(LC_ALL, "Portuguese");
    cont=100;
    func1();
}

void func1()
{
    int temp;
    temp=cont;
    func2();
    printf("o valor em func2 de cont é = %d\n",cont);
}

void func2()
{
    int cont;
    for(cont=1;cont<10;cont++) printf("o valor em func1 de cont é = %d\n",cont);
}

