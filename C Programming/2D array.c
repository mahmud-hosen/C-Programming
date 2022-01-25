#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],sum[3][3],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        	printf("[%d][%d]",i,j);

		 scanf("%d",&a[i][j]);
        }
    }

     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        	printf("[%d][%d]",i,j);

		 scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        sum[i][j]=a[i][j]*b[i][j];
        }
    }


    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {

		 printf(" %d ",sum[i][j]);
        }
        printf("\n");
    }


}
