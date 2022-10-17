#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int number;

int Checker();

int main()
    {
    setlocale(LC_ALL,"Portuguese");

        puts("Insira um número inteiro:");
        scanf("%d",&number);
        Checker();
         if(Checker()==1)
            {
                puts("O número é perfeito.");
            }
         else
            {
                puts("O número é imperfeito");
            }
        printf("Retornando %d",Checker());
    }
int Checker()
    {
    int counter;
    int sum=0;
        for(counter=1; counter<number; counter++)
            { //printf("%d\n",sum);
                if(number%counter==0)
                    {
                        sum+=counter;
                    }
            }
                if(sum==number)
                    {
                        //puts("O número é perfeito");
                    return 1;
                    }
                else
                    {
                        //puts("O número é imperfeito");
                    return 0;
                    }

    }
