#include<stdio.h>
#include<conio.h>
int main()
{
int r,c,k,space=1;
printf("enter number of rows\n");
scanf("%d",&r);
space=r-1;
for(k=1;k<=r;k++)
{
for(c=1;c<=space;c++)
printf(" ");
space--;
for(c=1;c<=2*k-1;c++)
printf("*");
printf("\n");
}
space=1;

for(k=1;k<=r-1;k++)
{
for(c=1;c<=space;c++)
printf(" ");
space++;
for(c=1;c<=2*(r-k)-1;c++)
printf("*");
printf("\n");
}
getch();
return 0;
}
