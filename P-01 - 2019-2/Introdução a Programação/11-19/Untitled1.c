#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    float n1,n2,n3;
    puts("Insira 3 valores numéricos");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    if(n1>n2 && n1>n3 && n2>n3) printf("%1.2f %1.2f %1.2f",n1,n2,n3); //n1,n2,n3
    else if(n1>n2 && n1>n3 && n3>n2) printf("%1.2f %1.2f %1.2f",n1,n3,n2); //n1,n3,n2
    else if(n2>n1 && n2>n3 && n1>n3) printf("%1.2f %1.2f %1.2f",n2,n1,n3); //n2,n1,n3
    else if(n2>n1 && n2>n3 && n3>n1) printf("%1.2f %1.2f %1.2f",n2,n3,n1); //n2,n3,n1
    else if(n3>n1 && n3>n2 && n1>n2) printf("%1.2f %1.2f %1.2f",n3,n1,n2); //n3,n1,n2
    else if(n3>n1 && n3>n2 && n2>n1) printf("%1.2f %1.2f %1.2f",n3,n2,n1); //n3,n2,n1
    else if(n1==n2 && n1>n3) printf("%1.2f %1.2f %1.2f",n1,n2,n3); //n1=n2,n3
    else if(n1==n2 && n3>n1) printf("%1.2f %1.2f %1.2f",n1,n2,n3); //n3,n1=n2
    else if(n1==n3 && n1>n2) printf("%1.2f %1.2f %1.2f",n1,n2,n3); //n1=n3,n2
    else if(n1==n3 && n2>n1) printf("%1.2f %1.2f %1.2f",n1,n2,n3); //n2,n1=n3
    else if(n2==n3 && n2>n1) printf("%1.2f %1.2f %1.2f",n1,n2,n3); //n2=n3,n1
    else if(n2==n3 && n1>n2) printf("%1.2f %1.2f %1.2f",n1,n2,n3); //n1,n2=n3
    else printf("todos são iguais, logo, %1.2f %1.2f %1.2f",n1,n2,n3);
}
