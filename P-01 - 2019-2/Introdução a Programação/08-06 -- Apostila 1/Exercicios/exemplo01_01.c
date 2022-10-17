#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
setlocale(LC_ALL, "Portuguese");
 printf("ótima aula!\n");
 /*printf("\n****** Verificando a localidade corrente ********\n\n");
 printf ("Localidade corrente: %s\n", setlocale(LC_ALL,NULL) );
 printf("Não é possível usar acentuação ou ç corretamente...\n\n");

 printf("\n****** Alterando para a localidade do sistema ********\n\n");

 //alterando para o padrão do sistema operacional
 printf("A localidade corrente agora é %s \n",setlocale(LC_ALL,""));
 printf("Agora não tem mais problema algum!\n");
 printf("Já posso usar acentuação e também o caracter ç...\n\n\n");
 printf("Agora sim. ótima aula!");
*/
 system("PAUSE");
 //return 0;
}
