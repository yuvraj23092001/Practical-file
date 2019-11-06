
#include<stdio.h>  
int main()  
{  
int i,n,fact=1;  
printf("Enter the  number whose factorial is to be find :\n");  
scanf("%d",&n);  
for(i=1;i<=n;i++)  
{  
fact=fact*i;  
}  
printf("Factorial of given number is : %d \n",fact);  
return 0;  
}  
