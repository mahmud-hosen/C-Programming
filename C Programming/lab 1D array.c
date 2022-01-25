#include<stdio.h>
int main()
{
	int i,array[6];
printf("| %d ",array[i]);
	}
	printf("Enter the number \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<5;i++)
	{

	printf("|\n");

    for(i=0;i<5;i++)
	{
		if(array[i]==5)
		{
			printf("Found\n");
			return 0;



		}


	}
	printf("Not Found\n");
	for(i=0;i<5;i++)
	{
	if(array[i]==4)
	{
		array[i]=array[i+1];
	}
	}
	for(i=0;i<5;i++)
	{
		printf(" %d ",array[i]);
	}


	return 0;


}