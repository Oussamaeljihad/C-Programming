#include <stdio.h>

int	main()
{
	int	num;
	int	complement;
	printf("Enter a number from 1 to 9:");
	scanf("%d", &num);
	complement = 10 - num;
	printf("The complemet of 8 is : %d\n", complement);
}
