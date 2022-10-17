#include<Stdio.h>
int main()
{
    int N;
    int A[N+1];
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }


    for(int i=N-1;i>=0;i--)
    {
        printf(" %d ",A[i]);
    }
    return 0;
}
