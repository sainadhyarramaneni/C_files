 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
 int num,m1,m2,m3,m4,m5,tot,avg,grd,ptg;
 printf("enter no of subjects");
 scanf("%d",&num);
 printf("enter the marks");
 scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
 tot=m1+m2+m3+m4+m5;
 printf("total=%d\n",tot);
 avg=tot/5;
 printf("average=%d\n",avg);
 ptg=tot/5;
 printf("percentage=%d\n",ptg);
 if(tot>=400 && tot<=500)
 {
 printf("grade O");
 }
 else if(tot>=300 && tot<=399)
 {
 printf("grade E");
 }
 else if(tot>=200 && tot<=299)
 {
 printf("grade A");
 }
 else
 printf("fail");
 getch();
 }


