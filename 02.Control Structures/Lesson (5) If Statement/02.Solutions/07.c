#include <stdio.h>

int	main()
{
	int	Salary;
	int	VacationDays;
	printf("Enter salary and number of vacation days:");
	scanf("%d %d", &Salary, &VacationDays);
	 
	if (VacationDays <= 21)
	{
		Salary += 10000;
		printf("Increment : 10000\n" );
		printf("New salary : %d\n", Salary );
	}
	else
                Salary += 5000;
                printf("Increment : 5000\n" );
                printf("New salary : %d\n", Salary );

}
