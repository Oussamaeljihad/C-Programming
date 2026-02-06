#include <stdio.h>

int	main()
{
	int	num[] = {1, 3, 2, 3, 3};
	int	i;
	int	sum;
	i = 0;
	sum = 0;
	while ( i < 5)
	{
		if (num[i] == 3)
		{
			sum += num[i];
			
		}
		i++;
	}
	printf("Sum of occurrences of the number 3: %d\n", sum);

}
