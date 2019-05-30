#include<stdio.h>

union team {
  char *name;
  int members;
  char captain[20];
};

int main()
{
union team t1,*sptr = &t1;

t1.name = "India";
printf("\nTeam : %s",(*sptr).name);
printf("\nTeam : %s",sptr->name);

return 0;
}
