#include <stdio.h>
int main()
{
    int x,z,y,i,sum=0;
    scanf("%d %d",&x,&y);
    for(i=x;i<y;i++)
    {
        scanf("%d",&z);
        if(z%2==0)
            sum=sum+z;
    }
    printf("%d\n",sum);



 return 0;
}
