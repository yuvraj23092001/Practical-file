
#include<stdio.h>  
int main()  
{  
int a[10][10],b[10][10],m,n,i,j;  
printf("Enter the size of matrix A as mand n:\n");  
scanf("%d%d",&m,&n);  
printf("Enter the elements of matrix A\n");  
for(i=0;i<m;i++)  
{  
for(j=0;j<n;j++)  
{
scanf("%d",&a[i][j]);  
}  
printf("\n");  
}    
for(i=0;i<m;i++)  
{  
for(j=0;j<n;j++)  
{  
b[i][j]=a[j][i];  
}  
}  
printf("Transpose of matrix is :\n");  
for(i=0;i<n;i++)  
{  
for(j=0;j<m;j++)  
{  
printf("%d ",b[i][j]);  
}
printf("\n");  
}  
return 0;  
}   
