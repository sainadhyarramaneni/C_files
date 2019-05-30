#include<stdio.h>
#include<conio.h>
void main()
{
int num,count=0;
clrscr();
printf("enter the number");
scanf("%d",&num);
while((num%10)!=0)
{
num=num/10;
++count;
}
printf("the no of digits in a number=%d",count);
getch();
}