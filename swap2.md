#### swapping two numbers using pointers

#include<stdio.h>  
void swap(int*,int*);  
void main()  
{int x,y;  
printf("enter value for x:");  
scanf("%d",&x);  
printf("enter value for y");  
scanf("%d",&y);  
printf("\n before calling swap function");  
printf("\n value of x=%d valueof y=%d",x,y);  
swap(&x,&y);  
printf("\n after returning swap function\n");  
printf("\n value ofx=%d valueof y=%d",x,y);  
}  
void swap (int *a,int *b)  
{  
int temp;  
printf("\n inside the function\n");  
printf("value of *a=%d value of *b=%d before swap\n",*a,*b);  
temp=*a;  
*a=*b;  
*b=temp;  
printf("value of *a=%d value of*b=%d after swap\n",*a,*b);  
}

*by yuvraj khanna*