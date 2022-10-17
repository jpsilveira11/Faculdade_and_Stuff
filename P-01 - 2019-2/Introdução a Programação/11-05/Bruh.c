#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
  int counter_bet,counter;
  int bet[6],winner[6];
    puts("Insira 6 valores inteiros entre 00 e 60:\n");
  //---//
  for(counter_bet=0;counter_bet<6;counter_bet++)
  {
  scanf("%d",&bet[counter_bet]);
  }
  //---//
  srand(time(NULL));
  for (counter=0;counter<6;counter++)
  {
      winner[counter]=rand()%60;
    printf("%d ",winner[counter]);
    }
}


