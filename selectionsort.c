#include<stdio.h>  
int main()  
{  
int i,j,a[5],temp,s;  
printf("enter 5 numbers to be sorted\n");  
for(i=0;i<5;i++)  
{  
scanf("%d",&a[i]);  
}  
printf("Sorted list is :\n");  
for(i=0;i<5;i++)  
{  
s=i;  
for(j=i+1;j<5;j++)  
{  
if(a[j]<a[s])  
{  
s=j;  
}  
}  
temp=a[s];  
a[s]=a[i];  
a[i]=temp;  
}  
for(i=0;i<5;i++)  
{  
printf("%d\n",a[i]);  
}  
return 0;  
}  
