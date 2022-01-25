#include<stdio.h>
int main()
{
	int i,j,a[5][5];
	printf("Enter the value for 2D array \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}