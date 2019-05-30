#include<stdio.h>
#include<conio.h>
void main()
{
int height,width,perimeter,area;
clrscr();
printf("enter the height\n");
scanf("%d",&height);
printf("enter the width\n");
scanf("%d",&width);
perimeter=2*(height+width);
printf("area=%d\n",perimeter);
area=height*width;
printf("perimeter=%d\n",area);
getch();
}
