#include<stdio.h>  
int main()  
{  
int m,n,r=1;  
printf("Enter two numbers to find gcd \n");  
scanf("%d%d",&m,&n);  
 while(r!=0)  
{  
r=m%n;  
m=n;  
n=r;  
}  
printf("\n GCD =%d\n ",m);  
return 0;  
}  
