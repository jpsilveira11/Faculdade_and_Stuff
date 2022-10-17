#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//------------------------------------------------------------------------------------------------------------------------------//
int male=0,female=0; //1. && 2.
float men_w_exp_med_age; //3.
float older_men_percent; //4.
int young_women_w_exp=0; //5.
int women_lower_age=0; //6.
int login();
int results();
int main()
{
setlocale(LC_ALL, "Portuguese");
login();
results();
/*
 1.identificar o n�mero de candidatos do sexo feminino; -- OK~~
*/

/*
 2.identificar o n�mero de candidatos do sexo masculino; -- OK~~
*/

/*
 3.identificar a idade m�dia dos homens que possuem experi�ncia no servi�o; -- OK~~
*/

/*
 4.identificar a porcentagem dos homens com mais de 45 anos entre o total dos homens; -- OK~~
*/

/*
 5.identificar o n�mero de mulheres com idade inferior a 21 anos e com experi�ncia no servi�o; -- OK~~
*/

/*
 6.identificar a menor idade entre as mulheres que possuem a experi�ncia no servi�o; -- OK~~
*/
}
//------------------------------------------------------------------------------------------------------------------------------//
int login()
{
int fake_age,age;
int w_experience=0,no_experience=0; //testes
int men_w_exp=0,men_w_exp_age=0; //3.
int older_men=0; //4.
char service,gender;
printf("Insira a idade do candidato.(Inserir um valor igual ou inferior a 0 encerrar� as inscri��es)\n");
scanf("%d",&fake_age);
while(fake_age>0){
age=fake_age;
printf("O(A) candidato(a) � do Sexo Masculino(M) ou Feminino(F)?\n");
scanf("%s",&gender);
get_gender:
switch(gender)
    {
    case 'F':
    case 'f':
    female++;
    break;

    case 'M':
    case 'm':
    male++;
    break;

    default:
    printf("Inv�lido, tente outra vez...\n");
    scanf("%s",&gender);
    goto get_gender;
    }
printf("O(A) candidato(a) j� tem experi�ncia profissional? (S para 'sim' e N para 'n�o')\n");
scanf("%s",&service);
get_service:
switch(service)
    {
    case 'S':
    case 's':
    w_experience++;
    break;

    case 'N':
    case 'n':
    no_experience++;
    break;

    default:
    printf("Inv�lido, tente outra vez\n");
    scanf("%s",&service);
    goto get_service;
    break;
    }
printf("//------------------------------------------------------------------------------------------------------------\\ \n");
printf("Registro finlaizado!\nInsira a idade de um novo candidato.(Inserir um valor igual ou inferior a 0 encerrar� as inscri��es)\n");
scanf("%d",&fake_age);
if((gender=='F'||gender=='f')&&(service=='S'||service=='s')&&(age<21))
{
    young_women_w_exp++;
}
if((gender=='F'|| gender=='f')&&(service=='S'||service=='s')&&(women_lower_age==0||age<women_lower_age))
{
    women_lower_age=age;
}
if((gender=='M'||gender=='m')&&(service=='S'||service=='s'))
{
men_w_exp++;
men_w_exp_age+=age;
}
if((gender=='M'||gender=='m')&&(age>45))
{
    older_men++;
}
//---//
}
//---//
if(men_w_exp_age==0 || men_w_exp==0) men_w_exp_med_age=0;
else men_w_exp_med_age=men_w_exp_age/men_w_exp;
float older_men_f=older_men;
float male_f=male;
if(male_f==0 || older_men_f==0) older_men_percent=0;
else older_men_percent=((older_men_f/male_f)*100);
}

int results()
{
printf("//-----------------------------------------------------------------------------------------------------------\\ \n");
printf("Ao final das incri��es:\n");
/*1*/printf("%d dos candidatos s�o do sexo Feminino.\n",female);
/*2*/printf("%d dos candidatos s�o do sexo Masculino.\n",male);
/*3*/printf("%1.2f � a m�dia de idade entre os candidatos homens com experi�ncia profissional.\n",men_w_exp_med_age);
/*4*/printf("%1.2f � a porcentagem de candidatos homens t�m mais de 45 anos de idade.\n",older_men_percent);
/*5*/printf("%d das candidatas s�o menores de 21 anos e possuem experi�ncia profissional.\n",young_women_w_exp);
/*6*/printf("E das candidatas citadas anteriormente, a mais jovem tem %d anos.\n",women_lower_age);
}
