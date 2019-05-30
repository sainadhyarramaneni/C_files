#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
char c;
clrscr();
printf("enter n:\n");
scanf("%d",&n);
c=97;
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
printf("%c",c);
}
c++;
}
getch();
}