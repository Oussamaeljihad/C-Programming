#include <stdio.h>

int	main()
{
	int	num1;
	int	num2;
	int	temp;

	num1 = 5;
	num2 = 8;

	printf("Befor swapping : num1 = %d, num2 = %d\n", num1, num2);

	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("After swapping num1 = %d, num2 = %d\n", num1, num2);

}
