#include<stdio.h>


adj [100][100];
int main()
{
	int node,edge,i,j;
	printf("Enter the node and edge\n");
	scanf("%d %d",&node,&edge);
	int n1,n2;
	for(i=0;i<edge;++i)
	{
		scanf("%d %d",&n1,&n2);
		adj[n1][n2]=1;
	adj[n2][n1]=1;
	}

	for(i=0;i<node;i++)
	{
		for(j=0;j<node;++j)
		{
			printf("%d\t",adj[i][j]);
		}
		printf("\n");
	}
	return 0;

}