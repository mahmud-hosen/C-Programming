#include<stdio.h>

int adj[100][100];
int main(){
    int i, j, n1,n2;

    // Input from input.txt file
    freopen("input.txt", "r", stdin);

    int node, edge;
    scanf("%d %d", &node, &edge);


    for(i=0; i<edge; i++)
    {
        scanf("%d %d",&n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    for(i=0; i<node; i++)
    {
        for(j=0; j<node; j++)
        {
            printf("%d \t",adj[i][j]);

        }
        printf("\n");

    }
    return 0;
}

