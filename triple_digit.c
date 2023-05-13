#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Enter code here
	
	int num;
	printf("enter the number \n");
	scanf("%i", &num);

	int hundred = num /100;
	int ten = (num%100)/10;
	int one = num %10;

	int sum = hundred + ten + one;

	printf("the sum is: %i \n", sum);	
	

	return 0;
}
