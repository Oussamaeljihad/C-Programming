#include <stdio.h>

int	main()
{
	int	num[10];
	int	size;
	int	i;

	i = 1;
	printf("Enter the size of the array:");
	scanf("%d", &size);

	printf("Enter %d number:\n", size);
	while ( i <= size )
	{
		printf("Number %d: ", i);
		scanf("%d", &num[i]);
		i++;
	}
	i = 1;
	printf("Entered numbers:");
	while(i<= size)
	{
		printf(" %d", num[i]);
		i++;
	}
	printf("\n");;

}
