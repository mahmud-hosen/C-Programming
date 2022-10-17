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
    }

    printf("__________ Matrix __________ \n\n");
    printf("____________________________ \n");

    for(i=0; i<node; i++)
    {
        for(j=0; j<node; j++)
        {
            printf(" %d |",matrix[i][j]);
        }
        printf("\n");
    }

    printf(" \n Edge connection check: %d \n", matrix[3][5]);

    return 0;
}
