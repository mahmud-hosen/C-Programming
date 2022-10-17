#include<stdio.h>
int main()
{
    int i,position,nums[10] = {1,3,5,6}, target = 5;
    for(i=0;i<=3;i++)
    {
        if(nums[i] == target){
            position = i;

        }else if(nums[i] > target){
            return i;
        }else if(nums[i] < target ){
            position = i;
        }

    }

    return 0;
}
