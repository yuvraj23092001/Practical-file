#include<stdio.h>  
#include<string.h>  
  
void main()  
{  
char str[20];    
int len;  
printf("\nEnter a string of length <= 19:  ");  
  
gets(str);  
len=strlen(str);    //String function to give integer length of str string
  
printf("Number of characters in %s = %d\n",str,len);  
}  
