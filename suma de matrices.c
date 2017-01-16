#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int d1,d2,i,j;
	int **m1,**m2,**mr;
	scanf("%i,%i",&d1,&d2);
	m1=malloc(sizeof(int*)*d2); //se pone doble ** por el espacio de memoria
	m2=malloc(sizeof(int*)*d2); 
	mr=malloc(sizeof(int*)*d2); 
	for(i=0;i<d2;i++)
	{
	m1[i]=malloc(sizeof(int)*d1);
	m2[i]=malloc(sizeof(int)*d1);
	mr[i]=malloc(sizeof(int)*d1);
	}

	for(i=0;i<d2;i++)
	{
	for(j=0;j<d1;j++)
	{
	scanf("%i",&m1[i][j]);
	}
	};

	for(i=0;i<d2;i++)
	{
	for(j=0;j<d1;j++)
	{
	scanf("%i",&m2[i][j]);
	}
	};

	for(i=0;i<d2;i++)
	{
	printf("\n");
	for(j=0;j<d1;j++)
	{
	mr[i][j]=m1[i][j]+m2[i][j];
	printf("\t %i",mr[i][j]);
	}
	};

return 0;
}
