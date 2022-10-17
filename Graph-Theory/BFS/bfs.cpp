
#include<stdio.h>
#include<queue>

using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int color[100];
int parent[100];
int dis[100];

int node, edge;

void bfs(int startingNode)
{
    for(int i=0; i < node; i++)
    {
        color[i] = WHITE;
        dis[i] = -288734;
        parent[i] = -1;
    }

    dis[startingNode] = 0;
    parent[startingNode] = -1;

    queue <int> q;
    q.push(startingNode);
    while(!q.empty())
    {
        int x = q.front();
        q.pop();

        color[x] = GRAY;

        printf(" %d ",x);

        // Somw work
        for(int i=0; i < node; i++)
        {
            // x ar neighbor i , so i node ar paret x
            if(adj[x][i] == 1)
            {
                if(color[i] == WHITE)
                {
                    dis[i] = dis[x]+1;
                    parent[i] = x;
                    q.push(i);
                }
            }
        }


        color[x] = BLACK;

    }


}
int main()
{

    freopen("input.txt", "r", stdin);
    scanf("%d %d", &node, &edge);

    int n1,n2;
    for(int i=0; i<edge; i++)
    {
        scanf("%d %d",&n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    bfs(0);

    printf("\n Parent of node 5 is : %d \n", parent[5]);
    printf(" Distance of 0 to 6 node is : %d \n", dis[6]);
    return 0;




}

