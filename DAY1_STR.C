#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void main()
{
char str1[100],str2[100],n;
int length,lenth,temp,i=0;
clrscr();
printf("enter string 1\n");
gets(str1);
printf("enter string 2\n`");
gets(str2);
printf("1.compare\n2.concat\n3.copy\n4.length\n5.reverse\n6.lower\n7.upper\nj");
printf("enter ur choice");
scanf("%d",&n);

switch(n)
{
case 1:
       for(i=0;str1[i]!='\0';i++)
       {
       if(str1[i]==str2[i])
       temp=1;
       else;
       temp=0;
       }
       if(temp==1)
       printf("strings are equal");
       else
       printf("strings are not equal");
       break;
case 2:
length=strlen(str2);
for(i=0;str1[i]!='\0';i++)
       {
       str2[length]=str1[i];
       length++;
       }
	str2[length]='\0';
	printf("concatenated string=");
       puts(str2);
       break;
case 3:
for(i=0;str1[i]!='\0';i++)
       str2[i]=str1[i];
       str2[i]='\0';
       printf("new str2=:");
       puts(str2);
       break;
case 4:
       gets(str1);
       while(str1!='\0')
       i++;
       printf("length=%d\n",i);
       break;
case 5:lenth=strlen(str1)-1;
       for(i=0;str1[i]!=0;i++)
       {
       str2[lenth]=str1[i];
       lenth--;
       }
       str2[lenth]='\0';
       printf("\nreverse of string is:\n");
       puts(str2);
       break;
case 6:
       while(str1[i]!='\0')
       {
       if(str1[i]>='A'&&str1[i]<='Z')
       {
       str1[i]=str1[i]+32;
       }
       ++i;
       }
       puts(str1);
       break;
case 7:
       while(str1[i]!='\0')
       {
       if(str1[i]>='a'&&str1[i]<='z')
       {
       str1[i]=str1[i]-32;
       }
       ++i;
       }
       puts(str1);
       break;
default:printf("invalid");
	exit(0);
}
getch();
}



