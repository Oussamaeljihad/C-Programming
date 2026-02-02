#include <stdio.h>

int	main()
{
	int	day;
	int	month;
	int	year;

	printf("Enter your birthdate (day month year): ");
	scanf("%d-%d -%d", &day, &month, &year);
	printf("Your birthdate is : %d/%d/%d\n", day, month, year);
}
