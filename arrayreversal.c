#include<stdio.h>
int main()
{
int a[25],b[25],i,m,n;

printf("Enter length of array:  ");
scanf("%d",&n);
printf("Enter %d elements:  ",n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=n-1,m=0;i>=0 && m<n;i--,m++)    //Starting fetching elements from the end of array 'a' so i is to be decremented until it becomes 0
b[m]=a[i];

printf("The reversed array is:  ");
for(m=0;m<n;m++)
printf("%d ",b[m]);

printf("\n\n");

return 0;
}
