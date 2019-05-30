#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long t;
int m,w,d,y=365,m1=30,w1=7;
clrscr();
printf("enter no of days");
scanf("%lu",&t);
printf("years=%lu\n",t/y);
m=t%y;
printf("months=%d\n",m/m1);
w=m%m1;
printf("weeks=%d\n",w/w1);
d=w%w1;
printf("days=%d\n",d);
getch();
}
