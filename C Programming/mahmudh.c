#include <stdio.h>
int main()
{
    int a[6],i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            a[i]=0;

             printf("%d\n",a[i]);
        }
    }


    return 0;
}
