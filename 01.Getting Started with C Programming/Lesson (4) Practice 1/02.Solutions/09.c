#include <stdio.h>

int	main()
{
	int	product1;
        int     product2;
        int     product3;
        int     product4;
        int     product5;
	int	quantity1;
	int	quantity2;
	int	quantity3;
	int	quantity4;
	int	quantity5;
	int	Total_Amount;

	printf("Enter the price of product 1: ");
        scanf("%d", &product1);
        printf("Enter the price of product 2: ");
        scanf("%d", &product2);
        printf("Enter the price of product 3: ");
        scanf("%d", &product3);
        printf("Enter the price of product 4: ");
        scanf("%d", &product4);
        printf("Enter the price of product 5: ");
        scanf("%d", &product5);

	printf("Enter the quantity of each product:");
	scanf("%d %d %d %d %d", &quantity1, &quantity2, &quantity3, &quantity4, &quantity5);
	Total_Amount = product1 * quantity1 + product2 * quantity2 + product3 * quantity3 + product4 * quantity4 + product5 * quantity5;

	printf("Total amount : %d\n", Total_Amount);


}
