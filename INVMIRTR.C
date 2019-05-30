#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r;
printf("enter no of rows:\n");
scanf("%d",&r);
for(i=r;i>0;i--)
{
for(j=r;j>i;j--)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}
