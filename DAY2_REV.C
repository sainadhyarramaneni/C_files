#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,j,a[5];
printf("enter the array\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("array before reverse\n");
for(i=0;i<5;i++)
{
printf("%d\t",a[i]);
}
printf("array after reverse\n");
for(i=5;i>=0;i--)
{
printf("%d\t",a[i]);
}
getch();
}