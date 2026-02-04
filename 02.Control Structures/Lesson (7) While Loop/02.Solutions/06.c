#include <stdio.h>

int	main()
{
	int	num;
	
	printf("Enter a number less than 15: ");
	scanf("%d", &num);

	while ( num <= 15)
	{
		printf("%d ", num);
		num++;
	}

	printf("\n");
}
