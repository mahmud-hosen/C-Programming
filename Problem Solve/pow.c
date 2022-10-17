#include <stdio.h>
#include <math.h>
int main()
{
    double myPow(double x, int n){
        return pow(x,n);

   }
    double res = myPow(2.00000,10);
    printf("%lf",res);
}
