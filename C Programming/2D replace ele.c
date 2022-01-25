#include<stdio.h>
int main()
{
	int i,j,a[5][5],m,n;
	printf("Enter the value for 2D array \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Which number you want to delete \n");
	{
	scanf("%d",&n);
	}
	printf("Replace value\n");
	{
	scanf("%d",&m);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==n)
			{
				a[i][j]=m;
				for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
			}

		}
		printf("\n");
	}
	return 0;
}