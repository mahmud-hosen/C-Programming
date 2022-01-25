#include<stdio.h>
int main()
{
    int i,N;
    float a,b,z,c;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
       scanf("%f %f %f ",&a,&b,&c);
       z=a*2.0+b*3.0+c*5.0;
       printf("%.1f\n",z/10.0);
    }
    return 0;
}

