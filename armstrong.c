#include<stdio.h>  
int main()  
{  
int number,temp;  
int arm=0,digit;  
printf("Enter any number");  
scanf("%d",&number);  
temp=number;  
while(temp>0)  
{  
digit=temp%10;  
arm=arm+(digit*digit*digit);  
temp/=10;   
}   
if(arm==number)  
printf("Armstrong\n");  
else  
printf("Not armstrong\n");  
  
return 0;  
}  
