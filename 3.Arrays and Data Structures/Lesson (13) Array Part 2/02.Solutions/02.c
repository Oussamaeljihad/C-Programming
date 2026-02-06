#include <stdio.h>

int	main()
{
	int	num[] = {1, 3, 2, 3, 3, 1, 1};
	int	i;
	int	sum;
	i  = 0;
	sum = 0;
	while (i <= 7)
	{
		if( num[i] == 3 || num[i] == 1)
		{
			sum += num[i];
		}
		i++;
	}
	printf("Sum off occurrences of the numbers 3 and 1 = %d \n", sum);
}
