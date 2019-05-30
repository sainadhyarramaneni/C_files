#include<stdio.h>
#include<conio.h>
int main()
{
char identity[20];
int workhrs;
double val,sal;
printf("enter the employee id\n");
scanf("%s",&identity);
printf("enter the working hours\n");
scanf("%d",&workhrs);
printf("enter the value\n");
scanf("%d",&val);
sal=val*workhrs;
printf("employeeid=%s\nworkinghours=%d\nsalary=%d\n",identity,workhrs,sal);
getch();
return 0;
}
