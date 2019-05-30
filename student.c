#include<stdio.h>
#include<conio.h>
struct stud
{
    int rollno, s1, s2, tot ;
    char name[10] ;
    float avg ;
} s[10] ;
void main()
{
    int i, n ;
    clrscr() ;
    printf("Enter the number of students : ") ;
    scanf("%d", &n) ;
    for(i = 0 ; i < n ; i++)
    {
        printf("\nEnter the roll number : ") ;
        scanf("%d", &s[i].rollno) ;
        printf("\nEnter the name : ") ;
        scanf("%s", s[i].name) ;
        printf("\nEnter the marks in 2 subjects : ") ;
        scanf("%d %d", &s[i].s1, &s[i].s2) ;
        s[i].tot = s[i].s1 + s[i].s2 ;
        s[i].avg = s[i].tot / 2.0 ;
    }
    printf("\nRoll No. Name \t\tSub1\t Sub2\t Total\t Average\n\n") ;
    for(i = 0 ; i < n ; i++)
    {
        printf("%d \t %s \t\t %d \t %d \t %d \t %.2f \n",
        s[i].rollno,s[i].name,s[i].s1,s[i].s2,s[i].tot,s[i].avg);
    }
    getch() ;
}
