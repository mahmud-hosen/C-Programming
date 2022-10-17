#include <stdio.h>

void main()
{
    int i,j,temp,sum=0, K1=2, K2=6, N=6, A[10] = {10, 2, 50, 12, 48, 13};

    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

     for(i=K1;i<K2-1;i++)
    {
        sum=sum+A[i];

    }
    printf("%d",sum);

}
