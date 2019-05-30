#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],n,i;
clrscr();
printf("enter no of elements");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("reversing the array:\n");
for(i=n-1;i>=0;i--)
{
printf("%d",a[i]);
}
getch();
}
