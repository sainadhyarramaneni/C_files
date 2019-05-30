#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,pos,x;
printf("enter the values in the array");
scanf("%d",&n);
printf("enter %d value in ascending order\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter value to be inserted");
scanf("%d",&x);
for(i=0;i<n;i++)
if(x/a[i])
{
pos=i;
break;
}
for(i=n;i<n;i++)
a[i]=a[i-1];
a[pos]=x;
printf("existed list is:\n");
for(i=0;i<n;i++)
printf("%5d",a[i]);
printf("after insert in the list is:\n");
for(i=0;i<n;i++)
printf("%5d",a[i]);
getch();
}