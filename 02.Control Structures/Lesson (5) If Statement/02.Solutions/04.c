#include <stdio.h>

int	main()
{
	int	employee1;
	int	employee2;

	printf("Enter attendance time for employee 1 and employee 2: ");
	scanf("%d %d", &employee1, &employee2);
	
	if (employee1 == employee2)
		printf("Same time.\n");
	else 
                printf("No bonus.\n");

}
