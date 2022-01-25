#include<stdio.h>
adj[100][100];
int main()

{
	int node,edge,n1,n2,i,j,count=0;

	printf("Enter the number the node & edge \n");
	scanf("%d %d ",&node,&edge);
	for(i=1;i<=2*edge;i++)
	{
		scanf("%d %d",&n1,&n2);
		adj[n1][n2]=1;

	}
	for(i=1;i<=node;i++)
	{
		for(j=1;j<=node;j++)
		{
			printf("%d\t",adj[i][j]);

		}
		printf("\n");
	}
	for(i=1;i<=node;i++)
	{
		for(j=1;j<=node;j++)
		{

		 if(adj[j][i]==1)
			count++;

		}
		printf("In degree  is [%d] = %d\n ",i,count);
		count=0;


	}
	for(i=1;i<=node;i++)
	{
		for(j=1;j<=node;j++)
		{

		 if(adj[i][j]==1)
			count++;

		}
		printf("Out degree  is [%d] = %d\n ",i,count);
		count=0;


	}




	return 0;
}
