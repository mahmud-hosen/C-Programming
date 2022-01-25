#include<stdio.h>
int main()
{
	int i,j,array[3][3],sum;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)

		{
			printf("[%d] [%d] = ",i,j);

			scanf("%d",&array[i][j]);
		}
	}

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)

		{
			if(array[i==j])
			{
				sum=sum+array[i][j];
			}


		}
		printf(" %d ",sum);

	}










	return 0;
}
