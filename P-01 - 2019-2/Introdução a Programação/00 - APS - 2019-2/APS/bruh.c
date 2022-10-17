#include<stdio.h>
main()
{
int number;
int counter;
int counter_2=0;
printf("Insira numero\n");
scanf("%d",&number);
for(counter=number;counter<=0;counter--)
    {
    printf("%d",counter);
    if (number%counter==0) counter_2+=counter;
    }
getch();
printf("%d",counter_2);
}

