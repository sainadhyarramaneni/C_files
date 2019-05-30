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
printf("enter input:\n");
for(i=0;i<n;i++)
{
scanf("%c",&c);
}
printf("after jumping:\n");
for(i=0;i<n;i++)
{
printf("%c",c);
c++;
}
getch();
}