#include<stdio.h>
struct result
{
	char Name[10];
	int ID;
	char sub[10];
	double GPA;
};
int main()
{
	struct result a[6];
	int i;
	for(i=0;i<5;i++)

	{
		printf("Name : ID : sub : GPA\n");
		scanf("%s %d %s %lf",&a[i].Name,&a[i].ID,&a[i].sub,&a[i].GPA);
	}

	for(i=0;i<5;i++)
	{
		printf("%s %d %s %lf\n",a[i].Name,a[i].ID,a[i].sub,a[i].GPA);
	}
	return 0;
}