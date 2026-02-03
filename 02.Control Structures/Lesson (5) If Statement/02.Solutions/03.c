#include <stdio.h>

int	main()
{
	int	weight1;
	int	weight2;
	int	weight3;
	int	weight4;
	int	weight5;
	int	Sum;
	printf("Enter 5 weights: ");
	scanf("%d %d %d %d %d", &weight1, &weight2, &weight3, &weight4, &weight5);
	
	Sum = weight1 + weight2 + weight3 + weight4 + weight5;
	if (Sum > 500)
		printf("Error, More than 500 Kg.\n");
	else 
		printf("Okey\n");
}
