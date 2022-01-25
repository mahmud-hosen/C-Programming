#include<stdio.h>
int main()
{
	int i,array[6],n;
	printf("Value\n");
	for(i=0;i<5;i++)

	{
		scanf("%d",&array[i]);
	}
	printf("Enter the delete value\n");

	scanf("%d",&n);

for(i=0;i<5;i++)
	{
	if(array[i]==n)
	{
		array[i]=array[i+1];
		for(i=0;i<4;i++)
	{
		printf(" %d ",array[i]);
	}
	}
	}



	return 0;


}