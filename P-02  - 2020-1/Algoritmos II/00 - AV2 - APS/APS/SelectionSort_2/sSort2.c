#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//INTEGRANTES DO GRUPO:
//Caio Rocha Caldas(2019200582), João Pedro Espechit Silveira(2019200901),
//Lucas Marapodi Batista Pinto(2019201253) e Saulo de Barros Mafra (2019200019)


void selecao(int Vet[],int n){

    int Menor, aux;

    for(int i=0;i<n-1;i++){
        Menor=i;
        for(int j=i+1 ; j<n ; j++){
            if(Vet[Menor] > Vet[j])
                Menor=j;
        }
        if(i!=Menor){
            aux=Vet[i];
            Vet[i]=Vet[Menor];
            Vet[Menor]=aux;
        }
    }
}
//anterior mente nós percorremos todo o vetor conparo esse vetor e comparo as posições caso a posição for diferente nós fazemos a troca 

int main(){
setlocale(LC_ALL, "Portuguese");
    int n=7;
    int Vetor[] = {9,7,8,1,2,0,4};
printf("Antes do Selection Sort, tinhamos os seguintes valores: 9,7,8,1,2,0,4");
   printf("\n\n");
   system("pause");
  
    selecao(Vetor,n);

    printf("\n\n");
    printf("Após a ordenacao nós agora temos : ");

    for(int i=0;i<n;i++){
        printf(" %d ;",Vetor[i]);
    }

    printf("\n\n\n");

    system("pause");
    return 0;
}