#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	//Enter code here
	
	long days;
	printf("Enter the number of days: ");
	scanf("%li", &days);

	long cent_result = 1;

	for (int i = 2; i<=days; i++)
	{
		cent_result = cent_result*2;
	}	
	
	printf("cent_result: %.2lf $\n", cent_result/ (double) 100); 


	return 0;
}
