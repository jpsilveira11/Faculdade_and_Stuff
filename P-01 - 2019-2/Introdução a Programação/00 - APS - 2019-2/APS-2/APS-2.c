#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main()
 {
setlocale(LC_ALL, "portuguese");
int idade,aux_idade;
int candidatas=0, candidatos=0; //1. e 2.
float med_homens; int total_idade=0; //3.
float porcentagem_homens; int qtd_homens45=0; //4.
int experiente=0,noob=0;
char sexo, experiencia;
//--------------------------//
printf("Digite sua idade:\n");
scanf("%d", &aux_idade);
    while(aux_idade>0)
    {
    idade=aux_idade;
    printf("Qual seu sexo? Digite M para masculino e F para feminino\n");
    scanf("%s",&sexo);
    sexo_loop:
    switch(sexo)
        {
        case 'F':
        case 'f':
            candidatas++;
        break;

        case 'M':
        case 'm':
            candidatos++;
        break;

        default:
            printf("Inválido, tente outra vez:\n");
            scanf("%s",&sexo);
            goto sexo_loop;
        }
    printf("Você tem experiência no serviço? Digite S pra sim e N para não\n");
    scanf("%s",&experiencia);
    exp_loop:
        switch(experiencia)
        {
        case 'S':
        case 's':
            experiente++;
        case 'N':
        case 'n':
            noob++;
        break;

        default:
            printf("Inválido, tente outra vez:\n");
            scanf("%s",&experiencia);
            goto exp_loop;
        }
    printf("//------------------------------------------------------------------------------------------------------------\\ \n");
    printf("Registro finlaizado!\nInsira a idade de um novo candidato.(Inserir um valor igual ou inferior a 0 encerrará as inscrições)\n");
    scanf("%d",&aux_idade);
    if(experiencia=='S' || experiencia=='s')
        {
        total_idade=total_idade+idade;
        }
    if(idade>45 &&(sexo=='M' || sexo=='m'))
        {
        qtd_homens45++;
        }
    }
float candidatos_f=candidatos;
float qtd_homens45_f=qtd_homens45;
if(candidatos==0 || total_idade==0)
    {
    med_homens=0;
    }
else
    {
    med_homens=total_idade/candidatos;
    }
if(qtd_homens45_f==0 || candidatos_f==0)
    {
    porcentagem_homens=0;
    }
else
    {
    porcentagem_homens=((qtd_homens45_f/candidatos_f)*100);
    }
printf("%1.2f \n",med_homens);
printf("%1.2f \n",porcentagem_homens);
}
