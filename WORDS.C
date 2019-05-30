#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char s[20];
int i,words=1;
printf("enter the sentence:\n");
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' '||s[i]=='\n'||s[i]=='\t')
{
words++;
}
}
printf("no of words=%d\n",words);
getch();
}

