#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,j;
printf("the pattern is:\n");
for(i=0;i<5;i++)
{
for(j=0;j<=i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}