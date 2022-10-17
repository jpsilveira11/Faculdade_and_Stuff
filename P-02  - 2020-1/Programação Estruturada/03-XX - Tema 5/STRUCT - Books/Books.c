#include<stdio.h>
#include<locale.h>
#define max 50

typedef struct
{
char name[51],author[31];
int year;
}library;

int main(void)
    {
        setlocale(LC_ALL,"Portuguese");
    library books[max];
    int NewBook=1,counter=0,older=0,newCounter;

    while((NewBook!=0)&&(counter<max))
        {
            printf("Livro %d:\n",counter+1);

            printf("Nome: ");
            gets(books[counter].name);
            fflush(stdin);

            printf("Autor: ");
            gets(books[counter].author);
            fflush(stdin);

            printf("Ano de publicação: ");
            getYear:
            scanf("%d",&books[counter].year);
            fflush(stdin);
            if(books[counter].year<1)
                {
                    printf("Data inválida, tente novamente: ");
                    goto getYear;
                }else if((older==0)||(older>books[counter].year))
                {
                    older=books[counter].year;
                }

            printf("\nCadastrar um novo livro?(1 para Sim || 0 para Não)\n");
            getNewBook:
            scanf("%d",&NewBook);
            fflush(stdin);

            switch (NewBook)
                {
                case 1:
                    counter++;
                    printf("\n");
                    break;

                case 0:
                    printf("\n");
                break;

                default:
                    printf("Erro! tente novamente: ");
                    goto getNewBook;
                }
            }
            printf("Lista de livros publicados em %d(Data mais antiga armazenada)\n",older);
            printf("//------------------------------------------------------------------------------------------------//\n");
        for(newCounter=0;newCounter<counter+1;newCounter++){
                if(books[newCounter].year==older)
                    {
                    printf("Livro %d\n",newCounter+1);
                    printf("Nome: %s\n",books[newCounter].name);
                    printf("Autor: %s\n",books[newCounter].author);
                    printf("\n");
                    }
        }
    }
