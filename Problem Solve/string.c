#include<stdio.h>
int main()
{
    int i,j,list1[20] = {1,2,4},list2[20] = {1,3,4}, list3[20];


    for(i=0;i<=2;i++)
    {
        for(j=i;j<=2;j++)
        {
            if(list1[i] == list2[j])
            {
                list3[i] = list1[i];
                list3[i+1] = list2[j];



            }else if(list1[i] < list2[j])
            {
                list3[i+1] = list1[i];
                list3[i+2] = list2[j];

            }
        }

    }

   for(i=0; i<= 6; i++)
   {
       printf("%d",list3[i]);
   }

   printf("%d \n",sizeof(list1));

    return 0;
}
