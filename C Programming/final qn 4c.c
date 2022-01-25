#include<stdio.h>
int main()
{
    int a[50],i,x,y;
    printf("Enter 5 integer number\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter x and y number\n");
    scanf("%d %d",&x,&y);
    for(i=0;i<5;i++)
    {
       if(a[i]%2!=0&&a[i]<x)
       {
        a[i]*=y;
       }
       else if(a[i]%2==0&&a[i]>y)
       {
       a[i]*=x;
    }
    }
    for(i=0;i<5;i++)
    {
    printf("%d\n",a[i]);
    }
    return 0;
}
