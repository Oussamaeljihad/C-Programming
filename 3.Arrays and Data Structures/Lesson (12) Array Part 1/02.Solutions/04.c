#include <stdio.h>

int	main()
{
	int	num[7];
	int	i;

	i = 1;
	printf("Enter 7 number:");
	while(i<=7)
	{
		printf("Number %d:", i);
		scanf("%d", &num[i]);
		i++;
	}

	i = 4;
	printf("Entered number (last 4): ");
	while(i <= 7)
	{
		printf(" %d", num[i]);
		i++;
	}
	printf("\n");

}
