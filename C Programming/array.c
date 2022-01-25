#include<stdio.h>
int main()
{
	int a[5][5],i,j;

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter value\n");

	scanf("%d %d",&i,&j);
	a[i][j]=1;
	a[j][i]=1;
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{

	printf("| %d ",a[i][j]);
	}
	printf("|\n");
	}

	return 0;
}