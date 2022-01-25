#include<stdio.h>
int main()
{

int i,array[6],count=0;
for(i=0;i<5;i++)

	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<5;i++)

	{
		count++;
	}
    printf("Count Number %d",count);
	return 0;
}