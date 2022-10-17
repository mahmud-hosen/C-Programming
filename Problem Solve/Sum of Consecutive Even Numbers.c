
#include<stdio.h>
int main()
{
    int j,X,sum;
    while(1)
    {
        sum=0;
        scanf("%d",&X);
        if(X == 0){
            break;
        }
        if(X % 2 != 0)
        {
            X=X+1;
        }
        for(j=0; j<5; j++)
        {
            sum = sum + X;
            X=X+2;
        }
            printf("%d\n",sum);
    }
    return 0;

}
