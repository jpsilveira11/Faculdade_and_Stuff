#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define devD_Workers 2

//f

int main()
{
setlocale(LC_ALL,"Portuguese");
int counter;
struct worker
    {
        char name[81],aderess[151];
        int id,cpf,rg;
        float salary;
    };
    struct worker devDivision[devD_Workers];
    for(counter=0;counter<devD_Workers;counter++)
        {
        printf("Funcion�rio %d\n\n",counter+1);
        printf("Nome  _________________ : ");
        gets(devDivision[counter].name);
        fflush(stdin);
        printf("Endere�o ______________ : ");
        gets(devDivision[counter].aderess);
        fflush(stdin);
        printf("Matr�cula _____________ : ");
        scanf("%d",&devDivision[counter].id);
        fflush(stdin);
        printf("CPF(Apenas n�meros) ___ : ");
        scanf("%d",&devDivision[counter].cpf);
        fflush(stdin);
        printf("RG(Apenas n�meros) ____ : ");
        scanf("%d",&devDivision[counter].rg);
        fflush(stdin);
        printf("Sal�rio atual(R$) _____ : ");
        scanf("%f",&devDivision[counter].salary);
        fflush(stdin);
    printf("\n//----------------------------------------------------------------------------------------------------//\n\n");
        }

  printf("\n//----------------------------------------------------------------------------------------------------//\n\n");

    for(counter=0;counter<devD_Workers;counter++)
    {
        printf("Dados do Funcion�rio %d:\n",counter+1);
        printf("Nome  _________________ : %s \nEndere�o ______________ : %s \nMatr�cula _____________ : %d \nCPF(Apenas n�meros) ___ : %d \nRG(Apenas n�meros) ____ : %d \nSal�rio atual(R$) _____ : %1.2f",devDivision[counter].name,devDivision[counter].aderess,devDivision[counter].id,devDivision[counter].cpf,devDivision[counter].rg,devDivision[counter].salary);
        printf("\n//----------------------------------------------------------------------------------------------------//\n");
    }
}
