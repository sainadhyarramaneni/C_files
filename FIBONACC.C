#include<stdio.h>
#include<conio.h>
void main()
{
int fst=0,sec=1,i,n,nxt;
printf("enter the number of elements:");
scanf("%d",&n);
printf("fibonacci series:");
for(i=1;i<=n;i++)
{
printf("%d\t",fst);
nxt=fst+sec;
fst=sec;
sec=nxt;
}
getch();
}