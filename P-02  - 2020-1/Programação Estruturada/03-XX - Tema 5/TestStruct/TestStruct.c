#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
    struct product
        {
            char name[51];
            int code, stock;
            float buyPrice,sellPrice;
        };
    struct product p1;
    printf("Nome do produto _________________ : ");
    gets(p1.name);
    printf("C�digo de Barras ________________ : ");
    scanf("%d",&p1.code);
    printf("Estoque dispon�vel ______________ : ");
    scanf("%d",&p1.stock);
    printf("Pre�o de compra(R$) _____________ : ");
    scanf("%f",&p1.buyPrice);
    printf("Pre�o de venda(R$) ______________ : ");
    scanf("%f",&p1.sellPrice);

printf("\n//----------------------------------------------------------------------------------------------------// \n");

        printf("Dados do Produto: \nNome do produto _________________ : %s \nC�digo de Barras ________________ : %d \nEstoque dispon�vel ______________ : %d \nEstoque dispon�vel ______________ : %1.2f \nPre�o de venda(R$) ______________ : %1.2f",p1.name,p1.code,p1.stock,p1.buyPrice,p1.sellPrice);

printf("\n//----------------------------------------------------------------------------------------------------// \n");
}
