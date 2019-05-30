#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
int i,c=0,c1=0,c2=0;
clrscr();
printf("enter the string\n");
gets(str);
for(i=0;str[i];i++)
{
if(str[i]==' ')
c++;
else if(str[i]=='\n')
c1++;
else if(str[i]=='\t')
c2++;
}
printf("spaces=%d\nlines=%d\ntabs=%d\n",c,c1,c2);
getch();
}
