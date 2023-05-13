#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void printN_to_1(int N){
	 
	printf("%d ", N);

	if (N>1) printN_to_1(N-1);
}


int main()
{
	//Enter code here
	printN_to_1(35);
	printf("\n");


	return 0;
}
