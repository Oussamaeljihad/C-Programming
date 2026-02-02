#include <stdio.h>

int	main()
{
	int	salary;

	printf("Enter your monthly salary: ");
	scanf("%d", &salary);
	printf("Your annual salary is : %d\n", 12 * salary);
}
