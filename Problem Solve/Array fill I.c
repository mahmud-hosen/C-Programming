
#include<stdio.h>
int main()
{
    float A[100];
    int i;

    for(i=0; i<10; i++)
    {
        scanf("%.1f",&A[i]);
    }

     for(i=0; i<10; i++)
    {
        printf("A[%d] = %.1f\n",i,A[i]);
    }
    return 0;

}
