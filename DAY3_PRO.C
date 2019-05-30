#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[20],str2[20],str3[20];
int i,a=0,b=0,p=0,m,n,ran=0,temp;
clrscr();
printf("enter string 1:\n");
gets(str1);
printf("enter string 2:\n");
gets(str2);
printf("enter the position:\n");
scanf("%d",&p);
a=strlen(str1);
b=strlen(str2);
i=0;
while(i<=a)
{
str3[i]=str1[i];
i++;
}
m=a+b;
n=b+p;
for(i=p;i<m;i++)
{
temp=str3[i];
if(ran<b)
{
str1[i]=str2[ran];
ran=ran+1;
}
str1[n]=temp;
n=n+1;
}
puts(str1);
getch();
}

