#include <stdio.h>

int	main()
{
	int	length;
	int	width;
	int	area;
	int	perimeter;
        length = 5;
        width = 8;
	area = ( length * width );
	perimeter = 2 * (length + width);
	printf("The area of the rectangle with length %d and width %d is : %d\n", length, width, area);
	printf("The perimeter of the rectangle whith langth %d and width %d is : %d\n", length, width, perimeter);
}
