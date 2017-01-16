#include <stdio.h>

int main(void)
{
int a,suma=0,cont=0;
float prom=0;

scanf("%i",&a);
while(a!=0)
{
suma=suma+a;
}

if(a==0)
{
prom=suma/cont;
printf("%f",prom);
}

cont=cont+1;

return 0;
}
