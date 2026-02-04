#include <stdio.h>

int	main()
{
	int	num;
	int	i;
	i = 1;

	printf("Enter a number:");
	scanf("%d", &num);

	while(i <= num)
	{
		printf("%d\n", i);
		i++;
	}
}

