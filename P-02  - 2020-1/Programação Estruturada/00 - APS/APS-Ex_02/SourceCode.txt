#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
//--------------------------------------------------------------------------------------------------//
typedef struct
{
    int id;
    float price;
    char description[500];
}product;
//-------------------------------------------------------------------------------------------------//
void Register(product *list,int code)
{
list->id=code;
printf("Preço:\t");
scanf("%f",&list->price);
setbuf(stdin,NULL);
printf("Descrição: ");
fgets(list->description,500,stdin);
setbuf(stdin,NULL);
}
//--------------------------------------------------------------------------------------------------//
/*void Print(product *list,FILE *products)
{
//fputc()
//printf("Produto #%d:\n",counter+1);
//printf("Código:\t%d\n",list->id);
//printf("Preço:\t%1.2f\n",list->price);
//printf("Descrição: ");
//puts(list->description);
fclose(products);
}*/
//--------------------------------------------------------------------------------------------------//
int main(void)
{
setlocale(LC_ALL,"Portuguese");
int confirm,check,prodCounter=0;
/*
char word_PROD_NO[]={'P','o','d','u','t','o',' ','#'};
char word_ID[]={'C','ó','d','i','g','o',':',' '};
char word_PRICE[]={'P','r','e','ç','o',':',' '};
char word_DESCRIPTION[]={'D','e','t','a','l','h','e','s',':',' '};
*/
product list;

printf("Código do Produto:(Valor <0 para cancelar)\t");
scanf("%d",&confirm);
setbuf(stdin,NULL);
if(confirm>=0)
    {
        FILE *products;
        products=fopen("produtos.dat","wb");
        //products=fopen("produtos.txt","w");
        if(products==NULL)
            {
                check=0;
                puts("Erro!");
                goto shutdown_ERROR;
            }else{
                Re:
                    Register(&list,confirm);
                    puts("\n//-------------------------------------------------------------------//\n");

                    prodCounter++;
                    fprintf(products,"Produto #%d\n",prodCounter);
                    fprintf(products,"Código:\t%d\n",list.id);
                    fprintf(products,"Preço:\t%1.2f\n",list.price);
                    fprintf(products,"Descrição:\t%s",list.description);
                    setbuf(products,NULL);

                    printf("Registrar um novo produto?(Se sim, digite seu código, caso contrário, um número <0)\n");
                    scanf("%d",&confirm);
                    if(confirm>=0)
                    {
                         fputs("\n//-------------------------------------------------------------------------------//\n\n",products);
                        goto Re;
                    }else{
                        fclose(products);
                        check=1;
                    }

            }
    }else
        check=3;
//
//-
//
switch(check)
    {
        case 0:
            shutdown_ERROR:
                puts("Arquivo não pôde ser criado.");
                exit(1);
            break;
        case 1:
            shutdown_SUCCESS:
                puts("Arquivo Criado com sucesso.");
                exit(0);
            break;
        case 3:
            shutdown_ABORT:
                puts("Operação cancelada.");
                exit(0);
        default:
            puts("Erro desconhecido. Tente novamente.");
            exit(1);
    }
}
//Por João Pedro Espechit Silveira - 2019200901
