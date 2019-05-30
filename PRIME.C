#include<stdio.h>
#include<conio.h>
int isPrime(int num);
int main()
{
int range,i;
printf("enter the range");
scanf("%d",&range);
printf("the primes upto %d are",range);
for(i=2;i<range;i++)
{
if(isPrime(i))
printf("%d\t",i);
}
getch();
return 0;
}

int isPrime(int num)
{
int i;
int flag=1;
for(i=2;i<(num/2);i++)
{
if(num%i==0)
{
flag=0;
break;
}
}
return flag;
}
