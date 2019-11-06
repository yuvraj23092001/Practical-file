#include<stdio.h>  
#include<string.h>  
  
void main()  
{  
char str1[30]="Wel",str2[30]="come";  
printf("\nFirst string is %s\n",str1);  
printf("\nSecond string is %s\n",str2);  
  
strcat(str1,str2);    //String function to concatenate str2 with str1  
  
printf("First string after appending second one:  %s\n",str1);  
}  
