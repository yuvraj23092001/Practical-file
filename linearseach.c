#include<stdio.h>  
int main()  
{  
int a[5],i,s,f;  
printf("Enter 5 numbers\n");  
for(i=0;i<5;i++)  
{  
scanf("%d",&a[i]);  
}  
printf("Enter number to be searched\n");  
scanf("%d",&s);  
for(i=0;i<5;i++)  
{  
if(s==a[i])  
{  
f=1;  
break;  
}  
}  
if(f==1)  
printf("Number is found \n");  
else  
printf("Number is not found \n");  
return 0;  
}  
