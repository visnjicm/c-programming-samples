#include <stdio.h>
#include <stdlib.h>
#include <math.h>



typedef struct point{

	int x;
	int y;
} Point;


Point inputPoint(Point input){

	printf("Enter the x variable of the point: ");
	scanf("%d", &input.x);
	printf("Enter the y variable of the point: ");
	scanf("%d", &input.y);

	return input;
}

void printPoint(Point input){

	printf("x coordinate of point is: %d\n", input.x);
	printf("y coordinate of point is: %d\n", input.y);
}



int main()
{
	//Enter code here
	Point p1;
	p1 = inputPoint(p1);
	printPoint(p1);


	return 0;
}
