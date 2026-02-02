#include <stdio.h>

int	main()
{
	int	littersOfGasoline;
	int	kilometers;
	printf("Enter the number of liters of gasoline:");
	scanf("%d", &littersOfGasoline);
	
	kilometers = 23 * littersOfGasoline;

	printf("The car can travel %d kilometers without refueling.\n", kilometers);

}
