#include <stdio.h>

int	main()
{
	int	num1;
	int	num2;
	int	num3;
	int	num4;
	int	sum;
	int	sub;
	num1 = 5;
	num2 = 8;
	num3 = 3;
	num4 = 2;
	sum = num1 + num2 + num3;
	sub = sum - num4;
	printf("The sum of numbers %d, %d, and %d is : %d\n", num1, num2, num3, sum);
	printf("Substractind number %d from the sum is : %d\n", num4, sub);

}
