#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a[5],i,sum=0;
clrscr();
printf("enter the array\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("the array elements are:\n");
for(i=0;i<5;i++)
{
printf("%d\t",a[i]);
sum=sum+a[i];
}
printf("sum=%d",sum);
getch();
return 0;
}