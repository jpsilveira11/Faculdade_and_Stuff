#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//var;

void calculation(float v1,float v2,float *sum1,float *minus1,float *multi1);
//float sumCalculation();
//float minusCalculation();
//float multiCalculation();

void main()
    {
    setlocale(LC_ALL,"Portuguese");
        float val1,val2,sum,multi,minus;

        puts("Insira um valor numérico qualquer:");
        scanf("%f",&val1);
        puts("Insira um segundo valor numérico qualquer:");
        scanf("%f",&val2);

    calculation(val1,val2,&sum,&minus,&multi);

        printf("Soma: %1.2f || Diferença: %1.2f || Produto: %1.2f",sum,minus,multi);

    }

void calculation(float v1,float v2,float *sum1,float *minus1,float *multi1)
    {
        *sum1=v1+v2;
        *minus1=v1-v2;
        *multi1=v1*v2;
    }
