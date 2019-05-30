#include<stdio.h>
#include<conio.h>
void main()
{
int a,c;
clrscr();
printf("enter a,b");
scanf("%d",&a);
/*c=a&b;
printf("%d&%d=%d\n",a,b,c);
c=a|b;
printf("%d|%d=%d\n",a,b,c);
c=a^b;
printf("%d^%d=%d\n",a,b,c);
c=a<<b;
printf("%d<<%d=%d\n",a,b,c);
c=a>>b;
printf("%d>>%d=%d\n",a,b,c); */
c=~a;
printf("~%d c=%d\n",a,c);
getch();
}