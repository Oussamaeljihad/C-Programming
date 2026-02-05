#include <stdio.h>

int	main()
{
	int	num[5];
	int	i;
	
	i = 1;
	printf("Enter 5 numbers: \n");
	while( i <= 5)
	{
		printf("Number %d:", i);
		scanf("%d", &num[i]);
		i++;
	}
	i = 5;

	printf("Entered numbers ( last 5): ");
	while( i >= 1)
	{
		printf(" %d", num[i]);
		i--;
	}
	printf("\n");
}
