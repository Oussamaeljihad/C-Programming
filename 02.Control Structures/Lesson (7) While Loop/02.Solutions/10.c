#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        while (num1 <= num2) {
            printf("%d ", num1);
            num1++;
        }
    } else if (num2 < num1) {
        while (num2 <= num1) {
            printf("%d ", num2);
            num2++;
        }
    } else {
        printf("Numbers are equal.\n");
    }

    return 0;
}

