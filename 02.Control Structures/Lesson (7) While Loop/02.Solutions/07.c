#include <stdio.h>

int	main()
{
	int	num;

	printf("Enter a number : ");
	scanf("%d", &num);

	if ( num <=20)
	{
		while ( num <= 20)
		{
		printf("%d ", num);
                num++;

		}
	}
	if ( num >= 20)
	{
		while( num > 20)
		{
                printf("%d ", num);
                num--;

		}
	}

}
