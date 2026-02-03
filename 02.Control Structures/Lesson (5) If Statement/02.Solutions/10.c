#include <stdio.h>

int     main()
{
        int     num;

        printf("Choose a shape:\n");
        printf("1. Square\n");
        printf("2. Triangle\n");
        printf("Enter you choice (1 or 2):");
        scanf("%d", &num);

        if (num == 1)
        {
                //Square
                printf("Shape selected : Square\n");
                printf("*****\n");
                printf("*   *\n");
                printf("*   *\n");
                printf("*****\n");
          
        }
        if (num == 2)
        {
                //Triangle
                printf("Shape selected : Triangle\n");
                printf("    /\\\n");
                printf("   /  \\\n");
                printf("  /    \\\n");
                printf(" ********\n");
        }
	if (num != 1 && num != 2)
		printf("Invalid choise, please enter 1 or 2.\n");

}
