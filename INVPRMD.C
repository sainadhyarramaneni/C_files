 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,space,r,k=0;
 printf("enter no of rows:\n");
 scanf("%d",&r);
 for(i=r;i>0;--i,k=0)
 {
 for(space=1;space<=r-i;++space)
 {
 printf("  ");
 }
 while(k!=2*i-1)
 {
 printf("* ");
 ++k;
 }
 printf("\n");
 }
 getch();
 }