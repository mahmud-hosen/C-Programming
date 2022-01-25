#include<stdio.h>
int main()
{
	int i,array[6],n,m;
	printf("Value\n");
	for(i=0;i<5;i++)

	{
		scanf("%d",&array[i]);
	}
	printf("Which number you want to delete \n");

	scanf("%d",&n);

printf("Replace Number \n");

	scanf("%d",&m);

for(i=0;i<5;i++)
	{
	if(array[i]==n)
	{
		array[i]=m;
		for(i=0;i<5;i++)
	{
		printf(" %d ",array[i]);
	}
	}
	}



	return 0;


}