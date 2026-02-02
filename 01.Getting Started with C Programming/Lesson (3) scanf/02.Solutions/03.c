#include <stdio.h>

int	main()
{
	int	f_num;
	int	S_num;
	int	sum;

	printf("Enter the first number:");
	scanf("%d", &f_num);
	printf("Enter the second number:");
	scanf("%d", &S_num);
	sum = f_num + S_num;
	printf("The sum of the two numbers is : %d\n", sum);
}
