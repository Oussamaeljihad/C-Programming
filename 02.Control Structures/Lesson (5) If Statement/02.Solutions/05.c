#include <stdio.h>

int	main()
{
	int	NumOfVisits;
	printf("Enter the number of visits to Gammal Tech website: ");
	scanf("%d", &NumOfVisits);

	if (NumOfVisits > 20)
		printf("Excellent\n");
}
