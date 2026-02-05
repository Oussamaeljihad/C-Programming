#include <stdio.h>

int	main()
{
	int	num[5];
	int	i;

	i = 1;
	printf("Enter 5 number:\n");
	while(i <= 5)
	{
		printf("Number %d: ", i);
		scanf("%d", &num[i]);
		i++;
	}
	i = 1;
	printf("Entered number :");
	while(i <= 5)
	{
		printf("%d\n", num[i]);
		i++;
	}

}
