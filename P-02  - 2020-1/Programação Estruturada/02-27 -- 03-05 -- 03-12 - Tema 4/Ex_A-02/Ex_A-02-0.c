/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.
\--------------------------------------------------------------------------------/
Feito por João Pedro Espechit Silveira(2019200901) && Caio Rocha Caldas(2019200582);
\-------------------------------------------------------------------------------/
*******************************************************************************/
#include <stdio.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"Portuguese");
float m[3][3],sum=0;
int line,column;

    for(line=0;line>-3;line--){
        for(column=0;column>-3;column--){
            printf("Linha %d || Coluna %d: ",(line*(-1))+1,(column*(-1))+1);
            scanf("%f",&m[line*(-1)][column*(-1)]);
            if(line==column)
            {
                sum+=m[line*(-1)][column*(-1)];

            }
        }
    }
printf("/---------------------------------------------------------------/\n");
    for(line=0;line<3;line++){
        for(column=0;column<3;column++){
            printf("%1.2f ",m[line][column]);
        }
        printf("\n");
    }
    printf("/----------------------------------------------------------------/\n A soma da Diagonal Secundária é %1.2f \n",sum);
    return 0;
}
