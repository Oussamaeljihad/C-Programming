#include <stdio.h>

int	main()
{
	int	sum;
	int	num;
	int	i;

	sum = 0;
	i = 1;
	printf("Enter a number: ");
	scanf("%d", &num);

	while( i <= num)
	{
		printf("%d ", i);
		sum += i;
		i++;
	}

	printf("Sum of numbers : %d\n", sum);

}

