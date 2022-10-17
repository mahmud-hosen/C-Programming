#include<stdio.h>
int matrix[100][100];

int main()
{
    int i, j, node, edge, n1, n2;
    freopen("input2.txt","r", stdin);

    scanf("%d %d", &node, &edge);

    for(i=0; i<edge; i++)
    {
        scanf("%d %d", &n1, &n2);
        matrix[n1][n2] = 1;
        matrix[n2][n1] = 1;
    }

    printf("Find Neighbors Or Adjacent node \n\n");
    printf("Node 5 Neighbors Or Adjacent node : \n")
;

    for(i=0; i<node; i++)
    {
        printf(" 5 --- %d = %d \n", i, matrix[5][i]);
    }


    return 0;
}
