#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int ch,n,sum=0,res,rem,rem1,rem2,rem3,rem4,rem5,rem6,rem7,a,b,dif,os=0,es=0;
clrscr();
printf("divisibility rule:");
printf("enter any number");
scanf("%d",&n);
printf("\n1.divisibleby2\n2.divisibleby3\n3.divisibleby4\n4.divisibleby5\n5.divisibleby6\n6.divisibleby7\n7.divisibleby8\n8.divisibleby9\n9.divisibleby10\n10.divisibleby11\n");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 2:res=n%10;
       if(res%2==0)
       printf("number is divisible by 2");
       else
       printf("not divisible by 2");
       break;
case 3:while(n!=0)
       {
       rem=n%10;
       sum=sum+rem;
       n=n/10;
       }
       if(sum%3==0)
       printf("divisible by 3");
       else("not divisible by 3");
       break;
case 4: rem1=n%100;
       if(rem1%4==0)
       printf("divisible by 4");
       else
       printf("not divisible by 4");
       break;
case 5: rem2=n%10;
       if(rem2==0||rem2==5)
       printf("divisible by 5");
       else
       printf("not divisible by 5");
       break;
case 6:while(n!=0)
       {
       rem4=n%10;
       sum=sum+rem4;
       n=n/10;
       }
       if(rem4%2==0&&sum%3==0)
       printf("divisible by 6");
       else
       printf("not divisible by 6");
       break;
case 7: if(n%7==0)
       printf("divisible by 7");
       else
       printf("not divisible by 7");
       break;
case 8: rem5=n%1000;
       if(rem5%8==0)
       printf("divisible by 8");
       else
       printf("not divisible by 8");
       break;
case 9:while(n!=0)
       {
       rem6=n%10;
       sum=sum+rem6;
       n=n/10;
       }
       if(sum%9==0)
       printf("divisible by 9");
       else
       printf("not divisible by 9");
       break;
case 10:rem7=n%10;
	if(rem7==0)
	printf("divisible by 10");
	else
	printf("not divisible by 10");
	break;
case 11:a=n;
	b=n/10;
	while(a>0)
	{
	os=os+(a%10);
	a=a/100;
	}
	while(b>0)
	{
	es=es+(b%10);
	b=b/100;
	}
	dif=os-es;
	if(dif%11==0||dif==0)
	printf("divisible by 11");
	else
	printf("not divisible by 11");
	break;
default:
exit(0);
//	break;
}
getch();

}




