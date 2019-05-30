#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter number:\n");
scanf("%d",&n);
for(i=1;i<=(n*2-1);i++)
{
if(i==n)
{
for(j=1;j<=(n*2-1);j++)
{
printf("+");
}
}
else
{
for(j=1;j<=n-1;j++)
{
printf(" ");
}
printf("+");
}
printf("\n");
}
getch();
}
