#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

float av1,av2,av3;
char letter;

int getGrades();

int main()
{   setlocale(LC_ALL, "PORTUGUESE");
        puts("insira a nota final da AV1(0 caso não tenha feito):");
            getAV1:
        scanf("%f",&av1);
            if(av1<0||av1>10) {
                puts("Valor inválido. Tente novamente com um valor entre 0 e 10.");
                goto getAV1;
                          }
        puts("agora, insira a nota final da AV2(0 caso não tenha feito):");
            getAV2:
        scanf("%f",&av2);
            if(av2<0||av2>10) {
                puts("Valor inválido. Tente novamente com um valor entre 0 e 10.");
                goto getAV2;
                          }
        puts("dessa vez, insira a nota final da AV3(0 caso não tenha feito):");
            getAV3:
        scanf("%f",&av3);
            if(av3<0||av3>10) {
                puts("Valor inválido. Tente novamente com um valor entre 0 e 10.");
                goto getAV3;
                          }
        puts("por ultimo, digite 'A'(Média Aritimética), 'P'(Média Ponderada), ou 'H'(Média Harmônica) para escolher a forma de calcular a média do aluno:");
            getLetter:
        scanf("%s",&letter);
            if((letter!='A' && letter!='a')&&(letter!='P' && letter!='p')&&(letter!='H' && letter!='h'))
                          {
                puts("Erro. Tente novamente:");
                goto getLetter;
                          }
        getGrades();

}

int getGrades()
{
    float finalGrade;
 switch(letter)
    {
    case 'A':
    case 'a':
        finalGrade=(av1+av2+av3)/3;
        printf("A nota do aluno foi %1.2f",finalGrade);
        /*if(av3<av1 && av3<av2)
            {
              finalGrade=(av1+av2)/2;
            printf("A nota do aluno foi %1.2f",finalGrade);
            }
        else if(av2<av1 && av2<av1)
            {
             finalGrade=(av1+av3)/2;
            printf("A nota do aluno foi %1.2f",finalGrade);
            }
        else if(av1<av2 && av1<av3)
            {
             finalGrade=(av2+av3)/2;
            printf("A nota do aluno foi %1.2f",finalGrade);
            }
        else if(av1=av2)
            {
             finalGrade=(av1+av3)/2;
            printf("A nota do aluno foi %1.2f",finalGrade);
            }
        else if(av1=av3)
            {
             finalGrade=(av1+av2)/2;
            printf("A nota do aluno foi %1.2f",finalGrade);
            }
        else if(av2=av3)
            {
             finalGrade=(av1+av3)/2;
            printf("A nota do aluno foi %1.2f",finalGrade);
            }
        else
            {
             finalGrade=(av1+av2)/2;
            printf("A nota do aluno foi %1.2f",finalGrade);
            }*/
    break;

    case 'P':
    case 'p':
        finalGrade=((av1*5)+(av2*3)+(av3*2))/(5+3+2);
        printf("A nota final do aluno foi %1.2f",finalGrade);
    break;

    case 'H':
    case 'h':
        finalGrade=3/((1/av1)+(1/av2)+(1/av3));
        printf("A nota final do aluno foi %1.2f",finalGrade);
    break;

    default:
        puts("E R R O .");
    }


}

