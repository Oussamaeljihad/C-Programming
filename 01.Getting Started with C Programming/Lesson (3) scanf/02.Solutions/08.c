#include <stdio.h>

int	main()
{
	
	int     num1;
        int     num2;
        int     num3;

        printf("Enter the first number:");
        scanf("%d", &num1);
        printf("Enter the second number:");
        scanf("%d", &num2);
        printf("Enter the third number:");
        scanf("%d", &num3);

	printf("The product of the sum of the first  two numbers and third number is : %d\n", (num1 + num2) * num3);
}
