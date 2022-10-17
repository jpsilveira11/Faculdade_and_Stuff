#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define max 10
int sSort(int sort[]);
int main()
{
    setlocale(LC_ALL,"Portuguese");
int vector[max],vectorBackup[max];
    puts("Vetor inicial:");
    srand(time(NULL));
    for(int counter=0;counter<max;counter++)
    {
        vector[counter]=(rand() % 100);
        printf("Pos #%d: %d\n",counter,vector[counter]);
    }
for(int counter=0;counter<max;counter++)
    {
        vectorBackup[counter]=vector[counter];
    }

    puts("Vetor após ordenação(Ordem Crescente):");
    sSort(vector);
for(int counter=0;counter<max;counter++)
    {
        printf("Pos #%d: %d\n",counter,vector[counter]);

    }
}

int sSort(int sort[]){
    for(int counter=0;counter<max-1;counter++)
        {
            int lowerIndex=counter;
            for(int newCounter=counter+1;newCounter<max;newCounter++){
                if(sort[newCounter]<sort[lowerIndex])
                    lowerIndex=newCounter;
            }
            if(sort[counter]!=sort[lowerIndex]){
                int aux=sort[counter];
                sort[counter]=sort[lowerIndex];
                sort[lowerIndex]=aux;
            }
        }
}