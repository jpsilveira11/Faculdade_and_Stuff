#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int circle(float r,float *area,float *perimeter);

int main()
    {

setlocale(LC_ALL,"Portuguese");

    float r,Area,Perimeter;

        puts("Insira o valor do raio:");
        scanf("%f",&r);

    circle(r,&Area,&Perimeter);
    printf("Área: %1.2f || Perimetro: %1.2f",Area,Perimeter);



    }

int circle(float r,float *area,float *perimeter)
    {
    *area=pow(r,2)*3.14;
    *perimeter=2*3.14*r;
    //printf("Área: %1.2f || Perimetro: %1.2f",area,perimeter);
    }
