#include<stdio.h>
#include<conio.h>
void main()
{
int a;
short b;
long c;
unsigned int d;
unsigned short e;
unsigned long f;
char g;
unsigned char h;
float i;
double j;
long double k;
clrscr();
scanf("%d %hi %ld %u %hu %lu %c %c %f %lf %Lf",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k);
printf("a=%d\n b=%hi\n c=%ld\n d=%u\n e=%hu\n f=%lu\n g=%c\n h=%c\n i=%f\n j=%lf\n k=%Lf\n",a,b,c,d,e,f,g,h,i,j,k);
getch();
}