#include<stdio.h>  
int main()  
{  
int a,b,c;  
printf("Enter the three numbers to check greatest \n");  
scanf("%d%d%d",&a,&b,&c);  
if(a>b)  
{  
if(a>c)  
{  
printf("1st number is greatest \n");  
}  
}  
else if(b>c)  
{  
if(b>a)  
{  
printf("2nd number is greatest \n");  
}  
}  
else  
{  
printf("3rd number is greatest \n");                                        
}  
return 0;  
}  
