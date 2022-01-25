#include<stdio.h>


	struct stu
	{
		int roll;
		double result;
		char name[10];
	};

	int main()

	{
		int i;
		struct stu a[3];
		for(i=0;i<3;i++)
		{
		scanf("%d %lf %s",&a[i].roll,&a[i].result,&a[i].name);
		}
		for(i=0;i<3;i++)
		{
		printf("%d %lf %s\n",a[i].roll,a[i].result,a[i].name);
		}

		return 0;
	}


