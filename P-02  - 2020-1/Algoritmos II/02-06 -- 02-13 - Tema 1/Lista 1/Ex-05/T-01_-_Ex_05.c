#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//var;

int triangle(float lineA, float lineB, float lineC);

int main()
    {
    setlocale(LC_ALL,"Portuguese");
      float line1,line2,line3;
        puts("Insira um valor qualquer:");
        scanf("%f",&line1);
        puts("Insira um segundo valor qualquer:");
        scanf("%f",&line2);
        puts("Insira um último valor qualquer:");
        scanf("%f",&line3);
        puts("//----------------------------------------------------------------------------------------------------\\\\");

    triangle(line1,line2,line3);
      //printf("Retornando %d",triangle(line1,line2,line3));
    }
int triangle(float lineA, float lineB, float lineC)
    {
      if((lineA<(lineB+lineC)) && (lineB<(lineA+lineC)) && (lineC)<(lineA+lineB))
        {
            puts("É possível fazer um triângulo com esses 3 valores.");
         return 1;
        }
      else
        {
            puts("Não é possível fazer um triângulo com esses 3 valores.");
         return 0;
        }
    }
