#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	//Enter code here
	int input = 0;
	int sum = 0;
	int count = 0;
	double average;
	
	while(1)
	{
		printf("Enter grade: ");
		scanf("%d",&input);

		if(input < 0 ) break;

		sum += input;
		count++;

	}

	if (count == 0) exit(0);	


	average = (double) sum/count;
	printf("Average grade is: %lf \n", average);


	return 0;
}
