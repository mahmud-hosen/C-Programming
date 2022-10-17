#include<stdio.h>
int main()
{
    r(5);
    return 0;
}

void r(int x){
    if(x == 0){
        return 0;
    }else{
        x--;
        printf("%d \n",x);
        r(x);
        printf("%d \n",x);
    }
}
