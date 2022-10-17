#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//--------------------------------------------------------------------------------------------------------------------------------//
//*********Protótipo************//
void Remaining(void)
//********Main**********//
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//---variaveis---//
	int id;
	float AV_1,AV_2;
	//---//
	//printf("Insira sua matrícula/n");
	//scanf("%d",&id);
	printf("Qual foi sua nota na AV1?\n");
	scanf("%f",&AV_1);
	AV_2=(14-AV_1);
	if(AV_2=7) printf("%1.2f",AV_2);
}



