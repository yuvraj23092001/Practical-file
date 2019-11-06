#include<stdio.h>  
int main()  
{  
int sum=0,digit;  
int temp,n;  
printf("Enter any number");  
scanf("%d",&n);  
temp=n;  
while(temp>0)  
{  
digit=temp%10;  
temp/=10;  
sum=sum*10+digit;  
}  
if(n==sum)  
printf("\n%d is a palindrome\n",n);  
else  
printf("\n%d is not a palindrome\n",n);  
return 0;  
}  
