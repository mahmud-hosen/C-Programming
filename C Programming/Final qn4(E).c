#include<stdio.h>
int main()
{
    char a[10];
    gets(a);
    int i;
    for(i=0; i<strlen(a); i++){
        if(a[i]>96 && a[i]<122){
            a[i]++;
        } else if(a[i]==122){
            a[i] = 'a';
        }
    }
    puts(a);
    return 0;
}
