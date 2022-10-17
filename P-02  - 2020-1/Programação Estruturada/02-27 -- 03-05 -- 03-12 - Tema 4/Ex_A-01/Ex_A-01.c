#include<stdio.h>
#include<locale.h>

char*finalString(char str1[], char str2[]);

int main()
{
setlocale(LC_ALL,"Portuguese");
char str1[103],str2[51];
//int counter;

    puts("Digite um texto de até 50 caracteres:");
    gets(str1);
    puts("Agora, digite outro texto de até 50 caracteres:");
    gets(str2);
    //finalString(str1,str2);
printf("Sua frase completa é: %s",finalString(str1,str2));

}

char*finalString(char str1[], char str2[])
{
int counter1,counter2;

    for(counter1=0;str1[counter1]!='\0';counter1++);
    for(counter2=0;str2[counter2]!='\0';counter2++,counter1++)
        {
        /*if(counter2==0)
            {
                str1[counter1]=' ';
            }else{*/
                str1[counter1]=str2[counter2];
            //}
        }
    str1[counter1]='\0';
    //puts(str1);
    return str1;
}
