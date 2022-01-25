#include<stdio.h>
int main()
{
	int i,j,array[3][3],sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)

		{
			printf("[%d] [%d] = ",i,j);

			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)

		{


			printf(" %d ",array[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)

		{
			if(i==j)
			sum=sum+array[i][j];
		}
		printf("\n");
	}
	printf(" %d ",sum);
	return 0;
}