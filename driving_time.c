#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Enter distance from A to B in km: ");
	double distance;
	scanf("%lf", &distance);
	printf("\n");

	printf("Enter speed of car in km/h: ");
	double speed;
	scanf("%lf", &speed);
	printf("\n");

	double time;
	time = distance/speed;
	printf("Gonna take %.2lf hours for you to get there...\n", time);


	return 0;	
}
