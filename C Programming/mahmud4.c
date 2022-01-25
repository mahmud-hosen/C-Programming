#include <stdio.h>
void swap(int x, int y) {

   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put temp into y */

   return;
}


/* function declaration */


int main () {

   /* local variable definition */
   int a;
   int b;
   scanf("%d %d",&a,&b);



   /* calling a function to swap the values */
   swap(a, b);
printf("%d %d",a,b);
   return 0;
}