#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//var;

int iterativo(int v1,int v2); //que usa la�os de repeti��o
int recursivo(int v1,int v2); //repete seus pa�os invocando � s� mesmo

int main()
    {
    setlocale(LC_ALL,"Portuguese");
    char function;
    int num1,num2;
        puts("insira o valor num�rico inteiro a ser multiplicado:");
            scanf("%d",&num1);
        puts("insira o valor num�rico inteiro que ir� multiplicar:");
            scanf("%d",&num2);
        puts("voc� quer executar esse calculo por meio de uma fun��o ITERATIVA(I) ou RECURSIVA(R)?");
        getFunction:
        scanf("%s",&function);
        if(function=='I'||function=='i')
            {
                iterativo(num1,num2);
              printf("O resultado � %d",iterativo(num1,num2));
            }
        else if(function=='R'||function=='r')
            {
                recursivo(num1,num2);
              printf("O resultado � %d",recursivo(num1,num2));
            }
        else
            {
                puts("Erro. Tente novamente:");
                goto getFunction;
            }
    }

int iterativo(int v1,int v2)
    {
    int counter,finalNum=0;
        for(counter=1;counter<=v2;counter++)
            {
            finalNum+=v1;
            }
        return (finalNum);
    }

int recursivo(int v1,int v2)
    {
    int counter=1,finalNum=0;
        do
            {
                finalNum+=v1;
                counter++;
            } while(counter<=v2);
        return (finalNum);
    }
