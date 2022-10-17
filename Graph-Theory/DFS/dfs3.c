#include<stdio.h>

#define WHITE 1
#define GRAY 2
#define BLACK 3

int matrix[100][100];
int color[100];
int node, edge;
int main()
{
    int i, n1, n2;
    freopen("input.txt", "r", stdin);
    scanf("%d %d", &node, &edge);

    for(i=0; i<edge; i++)
    {
        scanf("%d %d", &n1, &n2);
        matrix[n1][n2] = 1;
        matrix[n2][n1] = 1;

        dfs();
    }

    void dfs()
    {
        for(i=0; i<node; i++)
        {
            color[i] = WHITE;
        }
        for(i=0; i<node; i++)
        {
            if(color[i] = WHITE)
            {
                dfsVisit(i);

            }
        }
    }

    void dfsVisit(int x)
    {
        color[x] = GRAY;

        // Some Work
        for(i=0; i<node; i++)
        {
            if(matrix[x][i] == 1)
            {
                if(color[i] == WHITE)
                {
                    dfsVisit(i);
                }
            }

        }

        color[x] = BLACK;
    }
    return 0;
}

