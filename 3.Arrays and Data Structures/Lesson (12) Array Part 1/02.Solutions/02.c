#include <stdio.h>

int	main()
{
	int	num[7];
	int	i;

	i = 1;
	printf("Enter 7 number: \n");
	while( i <= 7)
	{
		printf("Number %d: ", i);
		scanf("%d", &num[i]);
		i++;
	}

	printf("Entered number (first 4):");
	i = 1;
	while( i <= 4)
	{
		printf(" %d", num[i]);
		i++;
	}
	printf("\n");
}
