
#include<stdio.h>  
void main()  
{  
int a[3][3],b[3][3],i,j;  
printf("The elements of 3 * 3 identity matrix:\n");  
for(i=0;i<3;i++)  
{  
for(j=0;j<3;j++)  
{  
if(i==j)  
printf(" 1 ");  
else  
printf(" 0 ");                                                            
}  
printf("\n");  
}  
}  
