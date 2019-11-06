
#include<stdio.h>  
int main()  
{  
int m,n,a[5][5],b[5][5],c[5][5],i,j;  
printf("Enter the size of  matrix");  
scanf("%d%d",&m,&n);  
printf("Enter the elements of matrix A\n");  
for(i=0;i<m;i++)  
{  
for(j=0;j<n;j++)  
scanf("%d",&a[i][j]);  
}  
printf("Enter the elements of matrix B\n");  
for(i=0;i<m;i++)  
{  
for(j=0;j<n;j++)  
scanf("%d",&b[i][j]);  
}  
printf("Sum of two matrices is :\n");  
for(i=0;i<m;i++)  
{  
for(j=0;j<n;j++)  
{  
c[i][j]=a[i][j]+b[i][j];  
printf("%d ",c[i][j]);  
}  
printf("\n");  
}  
return 0;  
}  
