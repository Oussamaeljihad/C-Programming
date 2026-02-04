#include  <stdio.h>

int	main()
{
	int	smallernumber;
	int	largernumber;

	printf("Enter the first number: ");
	scanf("%d", &smallernumber);
	printf("Enter the second number: ");
	scanf("%d", &largernumber);

	while( smallernumber <= largernumber)
	{
		printf("%d ", smallernumber);
		smallernumber++;
	}
}
