#include<stdint.h>
int matrix[100][100];
int main()
{
    int node, edge, i, j, n1, n2;

    printf("Enter Node and Edge number: \n");
    scanf("%d %d", &node, &edge);

    for(i=0; i<edge; i++)
    {
        scanf("%d %d", &n1, &n2);
        matrix[n1][n2] = 1;
    }


    for(i=0; i<node; i++)
    {
        for(j=0; j<node; j++)
        {
            printf(" %d |",matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}
