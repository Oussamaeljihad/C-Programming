#include <stdio.h>

int     main()
{

        int     num[5];
        int     i;
        int     Product;

        i = 1;
        Product = 1;

        printf("Enter 5 numbers:\n");

        while (i <= 5)
        {
                printf("Number %d: ", i);
                scanf("%d", &num[i]);
                i++;
        }
        i = 1;

        while( i <= 5)
        {
                Product *= num[i];
		i++;
        }

        printf("Product = %d\n", Product);

}

