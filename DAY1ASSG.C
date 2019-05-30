#include<stdio.h>
#include<conio.h>
void main()
{
int tab,limit,res,i;
clrscr();
printf("enter the table number:");
scanf("%d",&tab);
printf("enter the table limit:");
scanf("%d",&limit);
printf("the table is \n");
for(i=1;i<=limit;i++)
{
res=i+limit;
printf("\n%d+%d=%d\n",i,limit,res);
}
getch();
}
