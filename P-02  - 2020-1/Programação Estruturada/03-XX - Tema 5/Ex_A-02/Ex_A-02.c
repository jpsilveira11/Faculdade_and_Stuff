#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define products 20
int main()
{
setlocale(LC_ALL, "Portuguese");
int counter;
    struct product
        {
            char name[51];
            int code, stock;
            float buyPrice,sellPrice;
        };
    struct product p[products];

    for(counter=0;counter<products;counter++)
        {
            printf("Poduto %d:\n",counter+1);
            printf("Nome do produto _________________ : ");
            gets(p[counter].name);
            //fgets(p[counter].name,51,stdin);
            fflush(stdin);
            printf("Código de Barras ________________ : ");
            scanf("%d",&p[counter].code);
            fflush(stdin);
            printf("Estoque disponível ______________ : ");
            scanf("%d",&p[counter].stock);
            fflush(stdin);
            printf("Preço de compra(R$) _____________ : ");
            scanf("%f",&p[counter].buyPrice);
            fflush(stdin);
            printf("Preço de venda(R$) ______________ : ");
            scanf("%f",&p[counter].sellPrice);
            fflush(stdin);

         printf("\n//----------------------------------------------------------------------------------------------------//\n\n");

        }
    printf("\n//----------------------------------------------------------------------------------------------------//\n\n");

    for(counter=0;counter<products;counter++)
    {
        printf("Dados do Produto %d: \nNome do produto _________________ : %s \nCódigo de Barras ________________ : %d \nEstoque disponível ______________ : %d \nEstoque disponível ______________ : %1.2f \nPreço de venda(R$) ______________ : %1.2f",counter+1,p[counter].name,p[counter].code,p[counter].stock,p[counter].buyPrice,p[counter].sellPrice);
       printf("\n//----------------------------------------------------------------------------------------------------//\n\n");
    }

}
