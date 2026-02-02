#include <stdio.h>

int	main()
{
	int	age;
	int	birthyear;

	printf("Enter your age : ");
	scanf("%d", &age);
	birthyear  = 2026 - age; 
	printf("Your birthyear is : %d\n", birthyear);
}
