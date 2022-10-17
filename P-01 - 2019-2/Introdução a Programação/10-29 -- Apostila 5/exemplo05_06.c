#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");
char s[80];
printf("Digite a senha: ");
gets(s);
if (strcmp(s,"qqcoisa"))
printf("senha inválida\n");
else
printf("senha ok!\n") ;
}



