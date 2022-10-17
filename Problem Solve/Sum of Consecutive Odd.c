#include<stdio.h>
int main()
{
    int i,j,N,X,Y,sum=0,count=0;
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        scanf("%d %d",&X,&Y);
        if(X % 2 == 0)
        {
            X=X+1;
        }
        for(j=X; count<Y; j=j+2)
        {
            sum = sum + j;
            count++;
        }
        printf("%d\n",sum);
        count=0,j=0,sum=0;
    }

    return 0;

}
