
#include<stdio.h>

#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int color[100];

int node, edge;

void dfs()
{
    for(int i = 0; i < node; i++)
    {
        color[i] = WHITE;
    }
     for(int i = 0; i < node; i++)
    {
        if(color[i] == WHITE)
        {
            dfsVisit(i);

        }

    }

}

void dfsVisit(int x)
{
    color[x] = GRAY;

    // Some work
    for(int i = 0; i < node; i++)
    {
        if(adj[x][i] == 1)
        {
            if( color[i] == WHITE)
            {
                dfsVisit(i);
            }
        }

    }


    color[x] = BLACK;

}

int main(){


    freopen("input.txt", "r", stdin);

    // Node and Edge number read from file --->( 5 6 )
    scanf("%d %d", &node, &edge);

    //Edge read from file
    int n1,n2;
    for(int i=0; i<edge; i++)
    {
        scanf("%d %d",&n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    // DFS function call
    dfs();

    return 0;
}


