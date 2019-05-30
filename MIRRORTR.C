#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r;
printf("enter no of rows:\n");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=i;j<r;j++)
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
