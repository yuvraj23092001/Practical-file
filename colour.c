#include<stdio.h>  
int main()  
{  
char code;  
printf("Enter y for yellow, r for red, b for blue and g for green ");  
scanf("%c",&code);  
switch (code)  
{  
case 'y':  
printf("Yellow \n");  
break;  
case 'b':  
printf("Blue \n");  
break;  
case 'g':  
printf("Green \n");  
break;  
case 'r':  
printf("Red \n");  
break;  
default:                                                                  
printf("Wrong choice \n");  
break;  
}  
return 0;  
}  
