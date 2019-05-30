#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr = NULL;
	ptr = (int *)malloc(sizeof(int));

	if (ptr == NULL)
	{
		printf("ERROR: memory allocatin fail\n");
		return 1;
	}
	*ptr = 5;
	printf("%d\n", *ptr);

	free(ptr);

	return 0;
}
