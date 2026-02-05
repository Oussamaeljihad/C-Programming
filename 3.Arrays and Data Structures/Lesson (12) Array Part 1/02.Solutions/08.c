#include <stdio.h>

int	main()
{
	int	num[5];
	int	i;
	int	sum;
	
	sum = 0;
	i = 1;
	printf("Enter 5 numbers :\n");

	while (i <= 5)
	{
		printf("Number %d: ", i);
		scanf("%d", &num[i]);
		sum += num[i];
		i++;
	}
	
	printf("Sum = %d\n", sum);

}
