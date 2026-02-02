#include <stdio.h>

int	main()
{
	int	grade1;
	int	grade2;
	int	grade3;
	int	grade4;
	int	grade5;
	int	Total_Marks;
	int	Missing_Marks;
	printf("Enter your grade in 5  subject : ");
	scanf("%d %d %d %d %d", &grade1, &grade2, &grade3, &grade4, &grade5);
	Total_Marks = grade1 + grade2 + grade3 + grade4 + grade5;
	Missing_Marks = 500 - Total_Marks;

	printf("Total marks: %d\n", Total_Marks);
	printf("Missing marks: %d\n", Missing_Marks);
}
