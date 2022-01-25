#include<stdio.h>
struct Tesla {
    char Name[20];
    char Color[20];
    int Battery;
    float Millage;

   }a;

int main()

  {
     printf("Model Name of the Car : \n");
    scanf("%s",&a.Name);
     printf("Color of the Car: \n");
    scanf("%s",&a.Color);
     printf("Battery Capacity of the Car : \n");
    scanf("%d",&a.Battery);
     printf("Millage of the Car : \n");
    scanf("%f",&a.Millage);



    printf("Model Name of the Car : %s\n",a.Name);
    printf("Color of the Car : %s\n",a.Color);
    printf("Battery Capacity of the Car : %d\n",a.Battery);
    printf("Millage of the Car : %f\n",a.Millage);


    return 0;
}
