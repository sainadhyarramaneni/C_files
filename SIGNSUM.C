 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
 int a[5],i,sum=0,sum1=0;
 clrscr();
 printf("enter the array\n");
 for(i=0;i<5;i++)
 {
 scanf("%d\t",&a[i]);
 }
 printf("the array is :");
 for(i=0;i<5;i++)
 {
 printf("%d\t",a[i]);
 break;
 }
 printf("positive elements:");
 for(i=0;i<5;++i)
 {
 if(a[i]>0)
 {
 printf("%d\t",a[i]);
 sum=sum+a[i];
 }
 }
 printf("sum of positive elements=%d\n",sum);


 printf("negative elements:");
 for(i=0;i<5;++i)
 {
 if(a[i]<0)
 {
 printf("%d\t",a[i]);
 sum1=sum1+a[i];
 }
 }
 printf("sum of negative elements=%d\n",sum1);

 getch();
 }