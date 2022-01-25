#include<stdio.h>
int main()
{
 float a,avg=0,sum=0;
int i=0,count=0;
for(i=1;i<=6;i++)
{
    scanf("%f",&a);



    if(a>0){
        sum=sum+a;
        count++;

}
}
avg= sum/count;
printf("%d valores positivos\n",count);
printf("%.1f\n",avg);

    return 0;
}
