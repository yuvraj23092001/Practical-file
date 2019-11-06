**Binary Search **

#include<stdio.h>  
int main()  
{  
int i,a[10],n,lb=0,ub=9,mp;  
printf("Enter 10 numbers in ascending order \n");  
for(i=0;i<10;i++)  
{  
scanf("%d",&a[i]);  
}  
printf("Enter number to be searched \n ");  
scanf("%d",&n);  
mp=((lb+ub)/2);  
while(lb<=ub)  
{  
if(a[mp]==n)  
{  
printf("Number is found\n");  
break;  
}  
else if(a[mp]>n)  
{  
ub=mp-1;  
}  
else  
{  
lb=mp+1;  
}  
mp=((lb+ub)/2);  
}  
if(lb>ub)  
{  
printf("Number not found ");  
}  
return 0;  
}
