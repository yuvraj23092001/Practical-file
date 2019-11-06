#include<stdio.h>  
int main()  
{  
int c;  
printf(" Enter the value of day");  
scanf("%d",&c);  
if(c==1)  
printf("Monday \n");  
else if(c==2)  
printf("Tuesday  \n");  
else if(c==3)  
printf("Wednesday \n");  
else if(c==4)  
printf("Thursday \n");  
else if(c==5)  
printf("Friday \n");  
else if(c==6)  
printf("Saturday \n");  
else if(c==7)  
printf("Sunday \n");  
else  
printf("Wrong choice \n");  
return 0;  
}  
