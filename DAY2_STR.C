#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void main()
{
char str1[50],str2[50];
int n;
clrscr();
printf("enter string1\n");
gets(str1);
printf("enter string2\n");
gets(str2);
printf("1.compare\n2.concatenate\n3.length\n4.copy\n5.uppercase\n6.lowercase\n");
printf("enter your choice");
scanf("%d",&n);
switch(n)
{
case 1:if(strcmp(str1,str2)==0)
       printf("strings are equal");
       else
       printf("strings are not equal");
       break;
case 2:printf("the string after concatenation=%s\n",strcat(str1,str2));
	break;
case 3:printf("length of the string=%d\n",strlen(str1));
       break;
case 4:printf("string after copy=%s",strcpy(str1,str2));
       printf("the string is %s",str1);
	break;
case 5:printf("the string in uppercase=%s",strupr(str1));
	break;
case 6:printf("the string inlowercase=%s",strlwr(str1));
	break;
default:printf("invalid");
exit(0);
}
getch();
}
