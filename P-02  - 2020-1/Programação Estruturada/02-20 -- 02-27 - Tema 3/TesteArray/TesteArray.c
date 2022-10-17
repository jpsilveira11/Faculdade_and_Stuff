#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
setlocale(LC_ALL, "Portuguese");
int checklist[10],counter,checker;
printf("Insira 10 valores numéricos inteiros da forma que achar melhor\n//-------------------------------------------------------------//\n");
    for(counter=0;counter<=9;counter++)
    {
        printf("valor %d: ",counter+1);
        scanf("%d",&checklist[counter]);
    }
puts("Agora, escolha um valor numérico inteiro entre 0 e 10 para checar algum dos valores inseridos:");
getChecker:
scanf("%d",&checker);
printf("//-------------------------------------------------------------// \n");

            switch(checker)
            {
              case 1:
                printf("O primeiro valor inserido foi %d",checklist[0]);
              break;

              case 2:
                printf("O segundo valor inserido foi %d",checklist[1]);
              break;

              case 3:
                printf("O terceiro valor inserido foi %d",checklist[2]);
              break;

              case 4:
                printf("O quarto valor inserido foi %d",checklist[3]);
              break;

              case 5:
                printf("O quinto valor inserido foi %d",checklist[4]);
              break;


              case 6:
                printf("O sexto valor inserido foi %d",checklist[5]);
              break;


              case 7:
                printf("O sétimo valor inserido foi %d",checklist[6]);
              break;


              case 8:
                printf("O oitavo valor inserido foi %d",checklist[7]);
              break;


              case 9:
                printf("O nono valor inserido foi %d",checklist[8]);
              break;


              case 10:
                printf("O décimo valor inserido foi %d",checklist[9]);
              break;

              default:
                puts("Erro, tente novamente:");
                goto getChecker;

            }
}

