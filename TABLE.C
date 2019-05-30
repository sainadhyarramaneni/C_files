#include<stdio.h>
#include<conio.h>
void main()
{
int tab,lim,res,i;
printf("enter the table");
scanf("%d",&tab);
printf("enter the limit");
scanf("%d",&lim);
printf("the table is:\n");
for(i=1;i<=lim;i++)
{
res=i*lim;
printf("\n%d*%d=%d\n",i,lim,res);
}
getch();
}
