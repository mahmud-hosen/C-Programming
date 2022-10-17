#include<stdio.h>

int main()
{
    int num[20] = {2, 4, 4, 6, 7, 7, 7, 9, 9, 11, 11, 11,};
    int i, j, k, len=12;


    for(i=0; i<len ; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if( num[i] == num[j] )
            {
                for(k=j; k<len-1; k++)
                {
                    num[k] = num[k+1];

                }
                len--;
                j--;
            }


        }

    }


    for(i=0; i<len; i++)
    {
        printf("%d \n",num[i]);
    }




}
