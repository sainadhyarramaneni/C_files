#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,n,p,x;
clrscr();
printf("enter no of ele:\n");
scanf("%d",&n);
printf("enter the ele:\n");
for(i=0;i<n;i++)
{
printf("\nelements=%d:",i);
scanf("%d",&a[i]);
}
printf("\nvalue to insert:");
printf("\nvalue to insert:");
scanf("%d",&x);
printf("\npos to ins:");
scanf("%d",&p);
for(i=n;i>=p;i--)
a[i]=a[i-1];
a[p-1]=x;
for(i=0;i<=n;i++)
printf("%d",a[i]);
scanf("%d",&p);
for(i=n;i>=p;i--)
a[i]=a[i-1];
a[p-1]=x;
for(i=0;i<=n;i++)
printf("%d",a[i]);
printf("\n\n");
getch();
}