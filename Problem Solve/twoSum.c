#include<stdio.h>

int main()
{
    int i,j, target=6, nums[30] = {3,3};
    for(i=0;i<=3;i++)
    {
        for(j=i+1; j<=3; j++)
        {
            if((nums[i] + nums[j]) == target)
            {
                printf("[%d,%d]",i,j);

            }
        }
    }

    return 0;

}
