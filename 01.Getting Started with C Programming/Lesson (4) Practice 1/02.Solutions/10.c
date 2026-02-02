#include <stdio.h>

int main() {
    int price1, price2, price3, price4, price5;
    int quantity1, quantity2, quantity3, quantity4, quantity5;
    int totalAmountPaid;

    printf("Enter the price of product 1: ");
    scanf("%d", &price1);

    printf("Enter the price of product 2: ");
    scanf("%d", &price2);

    printf("Enter the price of product 3: ");
    scanf("%d", &price3);

    printf("Enter the price of product 4: ");
    scanf("%d", &price4);

    printf("Enter the price of product 5: ");
    scanf("%d", &price5);

    printf("Enter the quantity of each product: ");
    scanf("%d %d %d %d %d",
          &quantity1, &quantity2, &quantity3, &quantity4, &quantity5);

    printf("Enter the total amount paid: ");
    scanf("%d", &totalAmountPaid);

    int totalAmount =
        price1 * quantity1 +
        price2 * quantity2 +
        price3 * quantity3 +
        price4 * quantity4 +
        price5 * quantity5;

    int shortfall = totalAmount - totalAmountPaid;

    printf("Shortfall: %d\n", shortfall);

    return 0;
}

