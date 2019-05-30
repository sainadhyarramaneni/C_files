#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr = NULL;
	int i =0;
	ptr = (int *)malloc(sizeof(int));
	*ptr = 5;
	printf("%d\n", *ptr);
   ptr = (int *) realloc(ptr, sizeof(int)*5);

   	for (i = 0; i < 5; i++) {
		ptr[i] = i;
	}

   	for (i = 1; i < 5; i++) {
		printf("%d\n", ptr[i]);
	}

	free(ptr);

	return 0;
}
