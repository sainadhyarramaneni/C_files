#include<stdio.h>
#include<conio.h>
void main()
{
int num[20];
int i,j,a,n;
clrscr();
printf("enter no of elements:\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&num[i]);

for(i=1;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(num[i]>num[j])
{
a=num[i];
num[i]=num[j];
num[j]=a;
}
}
}
printf("the sorted array is");
for(i=0;i<n;i++)
{
printf("%d\t",num[i]);
}
getch();
}