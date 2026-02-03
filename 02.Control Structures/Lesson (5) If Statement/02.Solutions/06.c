#include <stdio.h>

int	main()
{
	int	number;
	printf("Enter the floor number:");
	scanf("%d", &number);

	if (number == 1)
		printf("Take the stairs\n");
	else 
		printf("Take the elevator\n");
}
