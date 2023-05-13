#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	//Enter code here
	double a = 17.64;
	double b = 28.332;
	double temp;
	printf("before swap... a = %lf and b = %lf\n", a, b);

	temp = a;
	a = b;
	b = temp;
	printf("after swap... a = %lf and b = %lf\n", a, b);


	return 0;
}
