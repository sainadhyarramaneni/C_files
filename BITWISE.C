#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter a,b");
scanf("%d%d",&a,&b);
c=a&b;
printf("%d&%d=%d\n",a,b,c);
c=a|b;
printf("%d|%d=%d\n",a,b,c);
c=a^b;
printf("%d^%d=%d\n",a,b,c);
c=a<<b;
printf("%d<<%d=%d\n",a,b,c);
c=a>>b;
printf("%d>>%d=%d\n",a,b,c);
c=~a;
printf("~%d c=%d\n",a,c);
getch();
}