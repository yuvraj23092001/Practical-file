#include<stdio.h>  
int main()  
{  
int n,i,a[10];  
int sum=0,avg;  
printf("Enter number of elements: \n");  
scanf("%d",&n);  
printf("Enter %d elements: \n ",n);  
for(i=0;i<n;i++)  
{  
scanf("%d",&a[i]);  
sum=sum+a[i];  
}  
avg=sum/n;  
printf("Average is %d \n",avg);  
return 0;                                                                     
}  
