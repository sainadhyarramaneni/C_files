#include<stdio.h>
#include<conio.h>
void main()
{
char a[50],i,n;
clrscr();
printf("enter the array:\n");
for(i=0;a[i]!='\0';i++)
{
scanf("%s",&a[i]);
}
for(i=0;a[i]!='\0';i++)
{
printf("%s",a[i]);
}
printf("after jumping:\n");
for(i=0;a[i]!='\0';i++)
{
a[i]=a[i]+2;
printf("%s",a[i]);
}
getch();
}
