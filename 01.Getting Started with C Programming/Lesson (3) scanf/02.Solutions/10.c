#include <stdio.h>

int     main()
{
        int     num1;
        int     num2;
        int     num3;
        int     num4;
	int	num5;
	int	result;

        printf("Enter the first number:");
        scanf("%d", &num1);
        printf("Enter the second number:");
        scanf("%d", &num2);
        printf("Enter the third number:");
        scanf("%d", &num3);
        printf("Enter the fourth number:");
        scanf("%d", &num4);
        printf("Enter the fifth number:");
        scanf("%d", &num5);

        result = num1 + num2 + num3 + num4 + num5;
        printf("Sum of the first two numbers is : %d\n", result);

}

