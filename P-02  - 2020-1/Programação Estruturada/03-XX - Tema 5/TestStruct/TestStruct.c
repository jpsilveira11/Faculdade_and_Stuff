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
    printf("Código de Barras ________________ : ");
    scanf("%d",&p1.code);
    printf("Estoque disponível ______________ : ");
    scanf("%d",&p1.stock);
    printf("Preço de compra(R$) _____________ : ");
    scanf("%f",&p1.buyPrice);
    printf("Preço de venda(R$) ______________ : ");
    scanf("%f",&p1.sellPrice);

printf("\n//----------------------------------------------------------------------------------------------------// \n");

        printf("Dados do Produto: \nNome do produto _________________ : %s \nCódigo de Barras ________________ : %d \nEstoque disponível ______________ : %d \nEstoque disponível ______________ : %1.2f \nPreço de venda(R$) ______________ : %1.2f",p1.name,p1.code,p1.stock,p1.buyPrice,p1.sellPrice);

printf("\n//----------------------------------------------------------------------------------------------------// \n");
}
