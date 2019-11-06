#include<stdio.h>  
int main()  
{  
int a[5],max,i;  
printf("Enter 5 numbers in array to find maximum \n ");  
for(i=0;i<5;i++)  
{  
scanf("%d",&a[i]);  
}  
max=a[0];  
for(i=0;i<5;i++)  
{  
if(max<a[i])  
max=a[i];  
}  
printf("Maximum number in array is %d \n",max);  
return 0;  
}  
