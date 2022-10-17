
#include<stdio.h>

int adj[100][100];
int main(){
    int i, j, n1,n2;

    // Input from input.txt file
    freopen("input.txt", "r", stdin);

    // Node and Edge number read from file ---> ( 5 6 )
    int node, edge;
    scanf("%d %d", &node, &edge);

    //Edge read from file
    for(i=0; i<edge; i++)
    {
        scanf("%d %d",&n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    // Matrix Print

    for(i=0; i<node; i++)
    {
        if(adj[1][i] == 1)
        {
            printf(" %d  | ",i);
        }

    }
    printf("\n\n\n");

    //printf("%d \n", adj[0][4]);


    return 0;
}

