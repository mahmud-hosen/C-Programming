#include<stdio.h>
adj[20][20];
int main()
{
	int i,j,n1,n2,node,edge;
	printf("Enter the number of node and edge\n");
	scanf("%d %d",&node,&edge);
	for(i=0;i<=edge;i++)
	{
		for(j=0;j<=edge;j++)
		{
			sacnf("%d %d",&n1,&n2);
			adj[n1][n2]=1;
		}

	}
     for(i=0;i<=node;i++)
	{
		for(j=0;j<=node;j++)
		{
			printf(" %d ",adj[i][j]);
		}
		printf("\n");

	}
	return 0;
}