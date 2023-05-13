#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	//Enter code here
	
	double height;
	double width;
	printf("Enter width of rectangle: ");
	scanf("%lf", &height);
	printf("Enter height of rectangle: ");
	scanf("%lf", &width);

	double perim = 2*height + 2*width;
	printf("The perimeter of the rectangle is %lf", perim);

	return 0;
}
