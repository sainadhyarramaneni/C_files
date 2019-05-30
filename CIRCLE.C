#include<stdio.h>
#include<conio.h>

int main()
{
int r;
float area,per;
float p=3.14;
clrscr();
printf("enter radius:\n");
scanf("%d",&r);
area=p*r*r;
printf("area=%f\n",area);
per=2*p*r;
printf("perimeter=%f\n",per);
getch();
return 0;
}