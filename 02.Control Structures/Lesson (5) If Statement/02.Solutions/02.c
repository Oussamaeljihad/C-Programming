#include <stdio.h>

int	main()
{
	int	num1;
	int	num2;

	printf("Enter number 01:");
	scanf("%d", &num1);
	printf("Enter number 02:");
	scanf("%d", &num2);

	if ( num1 > num2)
		printf("The maximum number is %d\n", num1);
	else if ( num1 = num2)
		printf("The maximun number is %d\n", num1);
	else
		printf("The maximum number is %d\n", num2);
}
