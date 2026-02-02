#include <stdio.h>

int	main()
{
	int	Monthly_Subscription;
	int	consumption;
	printf("Enter the Monthly Subscription balance: ");
	scanf("%d", &Monthly_Subscription);
	printf("Enter the consumption in the current month: ");
	scanf("%d", &consumption);

	printf("New balace: %d\n", Monthly_Subscription - consumption);

}
