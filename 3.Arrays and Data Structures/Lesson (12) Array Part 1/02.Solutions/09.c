#include <stdio.h>

int	main()
{
	
	int	num[5];
	int	i;
	int	sum;

	i = 1;
	sum = 0;

	printf("Enter 5 numbers:\n");

	while (i <= 5)
	{
		printf("Number %d: ", i);
		scanf("%d", &num[i]);
		i++;
	}
	i = 1;
	
	while( i <= 3)
	{
		sum += num[i];
		i++;
	}

	printf("Sum of the first three numbers = %d\n", sum);

}
