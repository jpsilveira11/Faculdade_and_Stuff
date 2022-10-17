#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
int i;
static int x[10]={0,1,2,3,4,5,6,7,8,9};
for(i=0;i<10;i++)
    {
        x[i] = x[i] * 10;
        printf("x[%d] = %d\n",i,x[i]);
    }
}
