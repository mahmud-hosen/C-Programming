#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the Balance  Call-Rate  Minute \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a >=b*c)printf("Call\n");
	else printf("Recharge");

	return 0;
}