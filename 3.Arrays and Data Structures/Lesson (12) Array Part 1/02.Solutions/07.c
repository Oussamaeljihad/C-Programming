#include <stdio.h>

int	main()
{
	int	num[5];
	int	i;

	i = 1;

	printf("Enter 5 numbers:\n");
	while (i <= 5)
	{
		printf("Number %d: ", i);
		scanf("%d", &num[i]);
		i++;
	}

	printf("Enter number (excluding first and last):");
	i = 2;
	while (i <= 4)
	{
		printf(" %d", num[i]);
		i++;
	}
	printf("\n");

}
