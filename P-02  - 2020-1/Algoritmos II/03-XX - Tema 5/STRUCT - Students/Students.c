#include<stdio.h>
#include<locale.h>
#define exams 4
#define maxClass 3
typedef struct
{
char name[51];
int id;
float grades[exams],finalGrade;
}students;

int main(void)
{
setlocale(LC_ALL,"Portuguese");
students ClassX[maxClass];
int counter,counterGrades;
float sum=0;
    for(counter=0;counter<maxClass;counter++)
        {
            printf("Aluno %d:\n",counter+1);
            printf("Nome: ");
            gets(ClassX[counter].name);
            fflush(stdin);

            printf("Matrícula: ");
            scanf("%d",&ClassX[counter].id);
            fflush(stdin);

            for(counterGrades=0;counterGrades<exams;counterGrades++)
                {
                    printf("Nota %d do aluno: ",counterGrades+1);
                    getGrades:
                    scanf("%f",&ClassX[counter].grades[counterGrades]);
                    fflush(stdin);
                    if((ClassX[counter].grades[counterGrades]>10)||(ClassX[counter].grades[counterGrades]<0))
                        {
                            printf("Erro! Tente novamente: ");
                            goto getGrades;
                        }else{
                            sum+=ClassX[counter].grades[counterGrades];
                            }
                }
            printf("\n");
            ClassX[counter].finalGrade=sum/exams;
            sum=0;
        }
//-----------------------------------------------------------------------------------------------------------------------------//
  printf("//--------------------------------------------------------------------------------------------------------------//\n");
  printf("Dados dos Alunos:\n");
  for(counter=0;counter<maxClass;counter++)
    {
        printf("Nome: %s\n",ClassX[counter].name);
        printf("Matrícula: %d\n",ClassX[counter].id);
        printf("Média: %1.2f\n",ClassX[counter].finalGrade);
        printf("\n");
    }
}
