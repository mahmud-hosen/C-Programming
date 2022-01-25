#include<stdio.h>
int main()
{
	int i,j,a[5][5],n;
	printf("Enter the value for 2D array \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the Search value\n");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==n)
			{
				printf("Found\n");
				return 0;
			}

		}
	}
	printf("Not Found\n");

	return 0;
}