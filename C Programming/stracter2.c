#include<stdio.h>
struct scientist
{

	char name[10];
	float age;
	char exp[20];
	int publication;
};

int main()
{
	struct scientist s[2];

	int i;
	printf("Name : age : exp : publication \n");
	for (i=0;i<2;i++)

	{
		scanf("%s %f %s %d",&s[i].name,&s[i].age,&s[i].exp,&s[i].publication);
	}


	for (i=0;i<2;i++)
	{
		printf("%s %f %s %d",s[i].name,s[i].age,s[i].exp,s[i].publication);
		printf("\n");
	}
	return 0;

}
