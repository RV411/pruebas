#include <stdio.h>

int main (void)
{
int a,i,j=0,aux;

scanf("%i",&a);

for(i=1;i<=a;i++)
{
aux=a%i;
if(aux==0)
{
aux=aux+1;
}

  if(aux==2)
  {
    printf("si");
  }
  else
  {
    printf("no");
  }
return 0;
}
