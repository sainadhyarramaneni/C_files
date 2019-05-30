#include<stdio.h>
#include<conio.h>
void main()
{
int hun,fif,twn,ten,fiv,two,one,rps;
clrscr();
printf("enter the total amount\n");
scanf("%d",&rps);
while(rps>=100)
{
hun=rps/100;
printf("no of hundreds=%d\n",hun);
break;
}
while(rps>=50)
{
fif=rps/50;
printf("no of fifties=%d\n",fif);
break;
}
while(rps>=20)
{
twn=rps/20;
printf("no of twenties=%d\n",twn);
break;
}
while(rps>=10)
{
ten=rps/10;
printf("no of tens=%d\n",ten);
break;
}
while(rps>=5)
{
fiv=rps/5;
printf("no of fives=%d\n",fiv);
break;
}
while(rps>=2)
{
two=rps/2;
printf("no of twos=%d\n",two);
break;
}
while(rps>=1)
{
one=rps/1;
printf("no of ones=%d\n",one);
break;
}
getch();
}

