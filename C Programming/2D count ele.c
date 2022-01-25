#include<stdio.h>
int main()
{
	int i,j,a[5][5],count=0 ;
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
			count++;
		}
		printf("\n");
	}
	printf("Total Element %d\n",count);
	return 0;
}