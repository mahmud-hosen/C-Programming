#include<stdio.h>
struct Tesla {
    char MyCar[20];
    char YourCar[20];

   }a;

int main()
{
    printf("My Car: \n");
    scanf("%s",&a.MyCar);
    printf("Your Car : \n");
    scanf("%s",&a.YourCar);


    printf("MY Car : %s\n",a.MyCar);
    printf("Your Car : %s\n",a.YourCar);

    return 0;
}
