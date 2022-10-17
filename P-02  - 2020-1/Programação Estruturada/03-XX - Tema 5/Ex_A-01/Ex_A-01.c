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
        printf("Funcionário %d\n\n",counter+1);
        printf("Nome  _________________ : ");
        gets(devDivision[counter].name);
        fflush(stdin);
        printf("Endereço ______________ : ");
        gets(devDivision[counter].aderess);
        fflush(stdin);
        printf("Matrícula _____________ : ");
        scanf("%d",&devDivision[counter].id);
        fflush(stdin);
        printf("CPF(Apenas números) ___ : ");
        scanf("%d",&devDivision[counter].cpf);
        fflush(stdin);
        printf("RG(Apenas números) ____ : ");
        scanf("%d",&devDivision[counter].rg);
        fflush(stdin);
        printf("Salário atual(R$) _____ : ");
        scanf("%f",&devDivision[counter].salary);
        fflush(stdin);
    printf("\n//----------------------------------------------------------------------------------------------------//\n\n");
        }

  printf("\n//----------------------------------------------------------------------------------------------------//\n\n");

    for(counter=0;counter<devD_Workers;counter++)
    {
        printf("Dados do Funcionário %d:\n",counter+1);
        printf("Nome  _________________ : %s \nEndereço ______________ : %s \nMatrícula _____________ : %d \nCPF(Apenas números) ___ : %d \nRG(Apenas números) ____ : %d \nSalário atual(R$) _____ : %1.2f",devDivision[counter].name,devDivision[counter].aderess,devDivision[counter].id,devDivision[counter].cpf,devDivision[counter].rg,devDivision[counter].salary);
        printf("\n//----------------------------------------------------------------------------------------------------//\n");
    }
}
