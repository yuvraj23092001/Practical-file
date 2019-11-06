#include<stdio.h>  
#include<string.h>  
struct employee  
{  
int code;  
char name[25],department[15];  
float salary;  
};  
void main()  
{  
struct employee aemployee;  
printf("Enter employee code \n");  
scanf("%d",&aemployee.code);  
printf("Enter employee's name \n");  
scanf("%s",&aemployee.name);  
printf("Enter employee's department \n");  
scanf("%s",&aemployee.department);  
printf("Enter employee salary \n");  
scanf("%f",&aemployee.salary);  
printf("Particulars of employee are :\n");  
printf("\n Employee's code   %d",aemployee.code);  
printf("\n Employee's name  %s",aemployee.name);  
printf("\n Employee's department  %s",aemployee.department);                
printf("\n Employee salary  %2f \n ",aemployee.salary);  
}  

                                            
