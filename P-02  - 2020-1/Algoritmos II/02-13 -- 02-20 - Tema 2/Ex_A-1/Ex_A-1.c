#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int iterative(int value1, int value2);
int recursive(int value1, int value2);

int main()
{
setlocale(LC_ALL,"Portuguese");
	float result,number1,number2;
	char function;
	puts("Insira o valor num�rico a ser multiplicado:");
	scanf("%f",&number1);
	puts("Insira o valor num�rico inteiro que respresentar� o multiplicador:");
	getNumber:
	scanf("%f",&number2);
	if(number2<0)
	{
		puts("Erro. Tente novamente:");
		goto getNumber;
	}
	puts("Voc� deseja executar essa multiploca��o por meio de uma fun��o Iterativa(I) ou Recursiva(R)?");
	getFunction:
	scanf("%s",&function);
	if(function=='I'|| function=='i')
	{
    result=iterative(number1,number2);
		printf("O resultado dessa opera��o � %1.2f",result);
	}else if(function=='R'||function=='r')
	{
    result=recursive(number1,number2);
        printf("O resultado dessa opera��o � %1.2f",result);
	}else
	{
		puts("Erro, tente novamente:");
		goto getFunction;
	}



}

int iterative(int value1,int value2)
{
float counter=1,result=0;
for(counter=1;counter<=value2;counter++)
    {
        result=result+value1;
    }

return result;
}

int recursive(int value1,int value2)
{
	if(value2<=0)
	{
		return 0;
	}
	else
	{
        return value1+recursive(value1,value2-1);
	}
}
