#include<stdio.h>
#include<conio.h>
#include<string.h>
void permutate(char *,int,int);
void swap(char *,char *);
void permutate(char *s,int start,int end)
{
int i;
if(start==end)
printf("%s\n",s);
else
for(i=1;i<=end;i++)
{
swap((s+1),(s+i));
permutate(s,start+1,end);
swap((s+1),(s+i));
}
}


void swap(char *a,char *b)
{
char c;
c=*a;
*a=*b;
*b=c;
}

void main()
{
char s1[]="pathfront";
int l=strlen(s1);
permutate(s1,0,l-1);
getch();
}
