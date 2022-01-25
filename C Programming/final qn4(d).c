#include<stdio.h>
int main()
{
    char str[50];
    int i,ch,word,capital,lower;
    i=capital=word=lower=0;
     printf("Enter a string\n");
      gets(str);
       while((ch=str[i])!='\0')
       {
        if(ch==' ')
         word++;
          else if(ch>=65&&ch<=90)
           capital++;
            else if(ch>=97&&ch<=122)
                lower++;
             i++;
              }
               printf("words:%d Capital Letters:%d Lowercase letters:%d\n",word+1,capital,lower);
                return 0;

                }
