#include <stdio.h>

int	main()
{
	int	N_Chairs;
	int	N_Tables;

	printf("Enter the number of chairs: ");
	scanf("%d", &N_Chairs);
	printf("Enter the number of tablaes: ");
	scanf("%d", &N_Tables);

	printf("Total nails need: %d\n", 25 * N_Chairs + 30 * N_Tables);
}
