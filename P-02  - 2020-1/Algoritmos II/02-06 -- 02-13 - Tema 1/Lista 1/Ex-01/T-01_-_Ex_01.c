#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int ratio();
float dividend,divisor,finalRatio;
int main()
{
setlocale(LC_ALL, "PORTUGUESE");
    puts("Insira o valor do dividendo(aquele que ser� dividido)");
    scanf("%f",&dividend);
    puts("Insira o valor do divisor(aquele que ir� dividir)");
    scanf("%f",&divisor);
ratio();
printf("Retornando %d",ratio());
}
int ratio()
{
if(divisor != 0)
    {
    finalRatio=dividend/divisor;
    printf("O resultado dessa divis�o � %1.2f\n",finalRatio);
    return 1;
    }
else
    {
    printf("N�o � possivel calcular essa divis�o\n");
    return 0;
    }
}
