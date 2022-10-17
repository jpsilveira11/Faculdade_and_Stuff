#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	static char re[]= "lagarto";
	puts(re);
	puts(&re[0]);
	//putchar('\n');
}
