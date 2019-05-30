#include<stdio.h>
#include<conio.h>
char voc(char var);
char uol(char itr);
char voc(char var)
{
if(var=='a'||var=='e'||var=='i'||var=='o'||var=='u'||var=='A'||var=='E'||var=='I'||var=='O'||var=='U')
{
printf("%c is vowel",var);
}
else
printf("%c is consonent",var);
}

char uol(char itr)
{
if(itr>'A'&&itr<'Z')
{
printf("%c is uppercase",itr);
}
else
printf("%c is lowercase",itr);
}

char main()
{
char res,res1;
printf("enter 1st character");
scanf("%c",&res);
res=voc(char var);
printf("res is %c",res);
printf("enter 2nd character");
scanf("%c",&res1);
res1=uol(char itr);
printf("res1 is %c",res1);
}

