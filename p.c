#include <stdio.h>

int main (void)
{
int a=1,aux=0,i=0,su=0,sum=0;
float prom;

while(a>0)
{
scanf("%i",&a);
aux=a%2;
if(aux==0)
{
su=su+a;
}
else
{
sum=sum+a;
i=i+1;
}
}
prom=(float)(sum/i);
printf("%i,%f",su,prom);
return 0;
}



