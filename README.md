# Practical-file
  #        PROGRAMMING FOR PROBLEM SOLVING 
##   NAME- *YUVRAJ KHANNA*
##   ROLL NO- *1915087*
##   BRANCH- *COMPUTER SCIENCE & ENGINEERING*
##   SECTION- *CS(B)*   
![LOGO](https://blog.coachingkaro.org/wp-content/uploads/2019/07/logo.jpg)
## **DEPARTMENT OF COMPUTER SCIENCE & ENGINEERING**
# **GURU NANAK DEV ENGINEERING COLLEGE, LUDHIANA**  
  
  
## CODE

#### 1. WAP to Add two numbers.  
  
#include<stdio.h>    
int main()  
{  
float n1,n2,sum;  
printf("Enter 1st,2nd number:  ");  
scanf("%f%f",&n1,&n2);  
  
sum=n1+n2;  
  
printf("Sum of 1st & 2nd number is = %.2f\n",sum);  
  
return 0;  
}  

#### 2. WAP to find the Average of 'n' numbers.  
  
#include<stdio.h>  
int main()  
{  
int n,i,a[50];  
float sum=0,avg;  
printf("Enter number of elements:  ");  
scanf("%d",&n);  
printf("Enter %d elements:  ",n);  
for(i=0 ; i<n ; i++)  
{  
scanf("%d",&a[i]);  
sum+=a[i];  
}  
avg=sum/n;  
printf("Average is %.2f.\n",avg);  
  
return 0;  
}  
  
#### 3. WAP to Print weekdays, using switch  
  
#include<stdio.h>    
int main()      
{   
int n;    
printf("Enter weekday in number:  ");    
scanf("%d",&n);   
 switch(n)  
{  
case 1:  
printf("Monday\n");    //Taking the business week  
break;  
case 2:  
printf("Tuesday\n");  
break;  
case 3:  
printf("Wednesday\n");  
break;  
case 4:  
printf("Thursday\n");  
break;  
case 5:  
printf("Friday\n");  
break;  
case 6:  
printf("Saturday\n");  
break;  
case 7:  
printf("Sunday\n");  
break;  
default:  
printf("Invalid Input\n");  
}   
return 0;    
  
}   

#### 4. WAP to find whether a number is Even or Odd.  
  
#include<stdio.h>  
int main()              {  
  
int n;  
printf("Enter a number:  ");  
scanf("%d",&n);  
  
if(n%2==0)  
printf("Number is even.\n");  
else   
printf("Number is odd.\n");  
  
return 0;  
  
}  
  
#### 5. WAP to Print the table of 2 using for loop.  
  
#include<stdio.h>  
int main()              {  
  
int n=1,product=2;  
  
printf("\tTable of 2\n");  
printf("\t==========\n\n");  
  
for(; n<=10 ; n++,product+=2)  
if(n<=4)    
printf("  2 x  %d =   %d  2 x  %d =  %d\n", n, product, n+10, product+20);  
else if(n<=9)  
printf("  2 x  %d =  %d  2 x  %d =  %d\n", n, product, n+10, product+20);  
else   
printf("  2 x %d =  %d  2 x  %d =  %d\n", n, product, n+10, product+20);  
  
return 0;  
}  
  
#### 6. WAP to check whether the number is an Armstrong number or not.  
  
#include<stdio.h>  
int main()  
{  
int n,temp,digit,sum=0;  
printf("Enter any positive integer:  ");  
scanf("%d",&n);  
temp=n;  
while(temp>0)  
{  
digit=temp%10; &nbsp; &nbsp;//Storing one's place  
temp/=10; &nbsp; &nbsp;//Storing number removing one's place  
sum+=digit * digit * digit; &nbsp; &nbsp;//Incrementing sum by cubing & adding all digits one-by-one     
}  
if(n==sum)  
printf("The entered number is an Armstrong number.\n");  
else  
printf("The entered number is not an Armstrong number.\n");  
  
return 0;  
}  
  
#### 7. WAP to Print calculator using puts.  
  
#include<stdio.h>  
void main()  
{  
puts("  _____________________  ");  
puts("| _____________________ |\n");  
puts("|  1  |  2  |  3  |\t|\n");  
puts("| ___ | ___ | ___ |\t|\n");  
puts("|  4  |  5  |  6  |  +  |\n");  
puts("| ___ | ___ | ___ | ___ |\n");  
puts("|  7  |  8  |  9  |  -  |\n");  
puts("| ___ | ___ | ___ | ___ |\n");  
puts("|\t0\t  |  *  |\n");  
puts("| _______________ | ___ |\n");  
}  
  
#### 8. WAP for Bubble Sort.  
  
#include<stdio.h>  
int main()  
{  
int a[20],i,n,k,temp;  
printf("\nEnter size of array:  ");  
scanf("%d",&n);  
  
printf("\nEnter %d elements of array.\n",n);  
  
for(i=0 ; i<n ; i++)  
scanf("%d",&a[i]);  
  
for(k=0 ; k<n-1 ; k++)  
{  
for(i=0 ; i<n-k-1 ; i++)  
{  
if(a[i]>a[i+1])  
{  
temp=a[i];  
a[i]=a[i+1];  
a[i+1]=temp;  
}  
}  
}  
printf("\nArray elements after sorting..\n");  
for(i=0 ; i<n ; i++)  
printf("%d ",a[i]);  
  
printf("\n");  
  
return 0;  
}  
  
#### 9. WAP for Binary Search.  
  
 #include<stdio.h>  
int main()  
{  
int a[25],i,m,n,first=0,last,mid;  

printf("Enter the length of array: ");    
scanf("%d",&m);  
printf("Enter %d elements in ascending order: ",m);  
for(i=0 ; i<m ; i++) { 
scanf("%d",&a[i]); } 

printf("Enter value to find: ");  
scanf("%d",&n);  

last=n-1;    //To initialise to last index position  
mid=(first+last)/2;  
while(first<=last)  
{  
if(a[mid]<n)  
first=mid+1;  
else if(a[mid]==n)  
{  
printf("%d found at position #%d.\n",n,mid+1);    //mid+1 done to display location & not index position  
break;  
}  
else  
last=mid-1;  

mid=(first+last)/2;  
}  

if(first>last)  
printf("%d not found in the entered array!\n",n);    //Test expression turned false, which means desired element wasn't found

return 0;  
}       
  
#### 10. WAP to find the Factorial of a number.  
  
#include<stdio.h>  
int main()  
{  
int n,i, fac=1;  
printf("Enter number which you want to get factorial of:  ");  
scanf("%d",&n);  
  
for(i=n ; **i>1** ; i--) &nbsp; &nbsp;//i>0 can also be set as test expression, but multiplying with 1 changes nothing  
fac*=i;  
  
printf("\n%d! = %d\n",n,fac);  
  
return 0;  
}  
  
#### 11. WAP for Fizz-Buzz.  
  
#include<stdio.h>  
int main()              {  
  
for(int d=1 ; d<=30 ; d++)                {  
  
if(d%3==0 && d%5==0)  
printf("FizzBuzz\n");  
  
else if(d%3==0)  
printf("Fizz\n");  
  
else if(d%5==0)  
printf("Buzz\n");  
  
else  
printf("%d\n",d);  
  
}  
return 0;  
  
}  
  
#### 12. WAP to find the Sum of first 100 numbers.  
  
#include<stdio.h>    
int main()              {  
  
int sum=0,n;  
n=1;  
while(n<=100)  
{  
sum+=n;  
n++;  
}  
printf("Sum of first 100 +ve integers = %d\n",sum);  
  
return 0;  
}  
  
#### 13. WAP to find the Greater of two numbers.  
  
#include<stdio.h>  
int main()              {  
  
int a,b;  
printf("Enter any 2 no.s:  ");  
scanf("%d%d",&a,&b);  
  
if(a>b)  
printf("a is greater.\n");  
else if(b>a)  
printf("b is greater.\n");  
else  
printf("a is equal to b.\n");  
  
return 0;  
}  
  
#### 14. WAP to find the Greatest of three numbers.  
  
#include<stdio.h>  
int a,b,c;  
**int largestof3(int a,int b,int c)** &nbsp; &nbsp;//Function definition  
*{*
int largest=0;  
if(a>b && a>c)  
largest=a;  
else if(b>a && b>c)  
largest=b;  
else  
largest=c;  
  
return largest;  
*}*  
int main()  
{  
printf("Enter 3 numbers:  ");  
scanf("%d %d %d",&a,&b,&c);  
printf("The largest of the 3 numbers entered is %d.\n",**largestof3(a,b,c)**); &nbsp; &nbsp;//Function call    
  
return 0;  
}  
  
#### 15. WAP to find G.C.D. of two numbers.  
  
#include<stdio.h>  
int main()  
{  
int n1,n2,i,gcd;  
  
printf("Enter 2 integers:  ");  
scanf("%d %d",&n1,&n2);  
  
for(i=1 ; i<=n1 && i<=n2 ; i++)  
if(n1%i==0 && n2%i==0)  
gcd=i;  
  
printf("GCD of %d and %d is %d.\n",n1,n2,gcd);  
  
return 0;  
}  
  
#### 16. WAP to find whether the year is Leap year or not.  
  
#include<stdio.h>    
int main()              {
  
int year;  
printf("Enter an year:  ");  
scanf("%d",&year);  
  
*if(year%4==0)* &nbsp; &nbsp;//Only considering the simple condition as asked to  
printf("Leap Year\n");  
  
else   
printf("Not a Leap Year\n");  
  
return 0;  
}  
  
#### 17. WAP for Linear Search.  
  
#include<stdio.h>  
int main()  
{  
int a[5],i,s,f;  
printf("Enter 5 numbers\n");  
for(i=0;i<5;i++)  
{  
scanf("%d",&a[i]);  
}  
printf("Enter number to be searched\n");  
scanf("%d",&s);  
for(i=0;i<5;i++)  
{  
if(s==a[i])  
{  
f=1;  
break;  
}  
}  
if(f==1)  
printf("Number is found \n");  
else  
printf("Number is not found \n");  
return 0;  
}  
  
#### 18. WAP for Matrix Addition.  
  
#include<stdio.h>  
void main()  
{  
int m,n,i,j;  
float m1[10][10],m2[10][10],m3[10][10];  
printf("Enter size of Matrix A & B as m,n:  ");  
scanf("%d%d",&m,&n);  
  
printf("Enter elements of Matrix A row wise\n\n");  
  
**for(i=0 ; i<m ; i++)**  
{  
*for(j=0 ; j<n ; j++)*  
scanf("%f",&m1[i][j]);  
}  
printf("Enter elements of Matrix B row wise\n\n");  
  
**for(i=0 ; i<m ; i++)**                                                               
{  
*for(j=0 ; j<n ; j++)* &nbsp; &nbsp;//Matrices to be added must have the same order     
scanf("%f",&m2[i][j]);  
}  
printf("The resultant matrix:\n");                                            
  
for(i=0 ; i<m ; i++)  
{  
printf("\n");  
for(j=0;j<n;j++)                                                              
{  
m3[i][j]=m1[i][j]+m2[i][j];  
printf("%.1f ",m3[i][j]);  
}  
}                                                                              
printf("\n\n");  
  
}  
  
#### 19. WAP to find Transpose of a matrix.  
  
#include<stdio.h>  
void main()  
{  
int a[10][10],b[10][10];  
int n,m,i,j;  
printf("Enter size of Matrix A as m,n:  ");  
scanf("%d%d",&m,&n);  
printf("\nEnter  elements of Matrix A row wise\n");  
  
for(i=0 ; i<m ; i++)  
{  
for(j=0 ; j<n ; j++)  
scanf("%d",&a[i][j]);  
}  
  
for(i=0 ; i<m ; i++)  
{  
for(j=0 ; j<n ; j++)  
**b[j][i]=a[i][j];** &nbsp; &nbsp;//Switching rows & columns of 'a' matrix to columns & rows of 'b' matrix respectively  
}   
printf("\nTranspose is\n\n");  
for(i=0 ; i<n ; i++)  
{  
printf("\n");  
for(j=0 ; j<m ; j++)  
printf("%d ",b[i][j]);  
}  
printf("\n\n");  
}  
  
#### 20. WAP to find the Sum of digits of a number.  
  
#include<stdio.h>                                                             
int main()              {  
  
int sum=0,digit;  
long n,temp;  
  
printf("Enter any +ve integer:  ");   
scanf("%ld",&n);  
  
temp=n;  
while(temp>0)                                                                 
{  
digit=temp%10; &nbsp; &nbsp;//Stores one's place    
temp/=10; &nbsp; &nbsp;//Stores number removing one's place   
sum+=digit; &nbsp; &nbsp;//Increments sum digit-by-digit   
}                                                                             
  
printf("\n Sum of digits of %d = %d \n",n,sum);  
  
return 0;  
}  
  
#### 21. WAP to check whether the number is Palindrome or not.  
  
#include<stdio.h>  
int main()  
{  
int rev=0,digit;  
int n,temp;  
printf("\nEnter any +ve integer:  ");                                         
scanf("%d",&n);  
temp=n;  
  
while(temp>0)  
{                                                                             
digit=temp%10; &nbsp; &nbsp;//Stores one's place  
temp/=10; &nbsp; &nbsp;//Stores number removing one's place  
rev=rev * 10+digit; &nbsp; &nbsp;//Forms reversed number digit-by-digit  
}  
if(n==rev)                                                                    
printf("\n%d is a palindrome number.\n",n);  
else  
printf("\n%d is not a palindrome number.\n",n);  
  
return 0;  
}  
  
#### 22. WAP to swap 2 numbers using Call by Value method.  
  
#include<stdio.h>  
**void swap(int a,int b);** &nbsp; &nbsp;//Function declaration   
  
void main()  
{  
int x,y;  
printf("\n Enter value for x:  ");  
scanf("%d",&x);  
printf("\n Enter value for y:  ");  
scanf("%d",&y);  
  
printf("\n Before calling swap function\n");  
printf("\n Value of x = %d, value of y = %d\n",x,y);  
  
**swap(x,y);** &nbsp; &nbsp;//Function call, with only values of x & y
  
printf("\n After returning from swap function");  
printf("\n Value of x = %d, value of y = %d\n",x,y); &nbsp; &nbsp;//No change as addresses of x & y were not involved   
}  

**void swap(int a,int b)** 
*{* &nbsp; &nbsp;//Function definition  
int temp;  
printf("\n Inside the function\n");  
printf("\n Value of a = %d, value of b = %d before swap\n",a,b);  
temp = a;  
a = b;  
b = temp;  
printf("\n Value of a = %d, value of b = %d after swap\n",a,b);  
*}*  
  
#### 23. WAP to swap 2 numbers using Call by Reference method.  
  
#include<stdio.h>  
**void swap( int * , int * );** &nbsp; &nbsp;//Function declaration    
  
void main()  
{  
int x,y;  
printf("\nEnter value for x:  ");  
scanf("%d",&x);  
printf("\nEnter value for y:  ");  
scanf("%d",&y);  
printf("\nBefore calling swap function\n");  
printf("\nValue of x=%d, value of y=%d\n",x,y);  
  
**swap(&x,&y);** &nbsp; &nbsp;//Function call, with addresses of x & y 
  
printf("\nAfter returning from swap function\n");  
printf("\nValue of x=%d, value of y=%d\n",x,y); &nbsp; &nbsp;//Interchanged, due to their addresses being swapped    
}  
**void swap( int * a , int * b )** &nbsp; &nbsp;//Pointer variables required to point to addresses   
*{* &nbsp; &nbsp;//Function definition  
int temp;  
printf("\nInside the function\n");  
printf("\nValue of *a=%d, value of *b=%d before swap\n",*a,*b);  
temp = *a;  
*a = *b;  
*b = temp;  
printf("\nValue of *a=%d, value of *b=%d after swap\n",*a,*b);  
*}*  
  
#### 24. WAP to enter the details of Employees using structures.  
  
#include<stdio.h>  
  
**struct employee** &nbsp; &nbsp;//Structure definition  
*{*  
int code;  
char name[25];  
char dept[15];  
float salary;  
*};*  
  
void main()  
{  
struct employee *Aemployee*; &nbsp; &nbsp;//Declaration of structure variable    
printf("Enter Employee's code:  ");  
scanf("%d",&Aemployee.code); &nbsp; &nbsp;//Storing fetched data in member of structure using dot operator  
printf("Enter Employee's name:  ");  
scanf("%s",&Aemployee.name);  
printf("Enter Employee's department:  ");  
scanf("%s",&Aemployee.dept);  
printf("Enter Employee's salary:  ");  
scanf("%f",&Aemployee.salary);  
  
printf("Particulars of Employee are\n");  
printf("Employee's code:  %d\nEmployee's name:  %s\nEmployee's department:  %s\nEmployee's salary:  %.2f\n\n",Aemployee.code,Aemployee.name,Aemployee.dept,Aemployee.salary);  
  
}  
  
#### 25. WAP to find the Product of fractions using structures.  
  
#include<stdio.h>  
  
struct frac  
{  
float num;  
float denom;  
};  
  
int main()  
{  
struct frac f1,f2,res;  
  
printf("Enter numerator,denominator of 1st fraction:  ");  
scanf("%f/%f",&f1.num,&f1.denom);  
printf("Enter numerator,denominator of 2nd fraction:  ");  
scanf("%f/%f",&f2.num,&f2.denom);  
  
res.num=f1.num * f2.num;  
res.denom=f1.denom * f2.denom;  
  
printf("The resultant product fraction is %.2f/%.2f.\n",res.num,res.denom);  
  
return 0;  
}  
