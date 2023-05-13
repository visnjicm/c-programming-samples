#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int digitsSum(int n)
{
	if (n<=9) return n;
	else return n%10 + digitsSum(n/10);
}


int main()
{
	//Enter code here
	int sum;	
	int num;
	printf("Enter number: ");
	scanf("%i", &num);
       	sum = digitsSum(num);

	printf("Sum is %d\n", sum);
	
	if (sum%2 == 0) printf("Even\n");
	else printf("Odd\n");	
	



	return 0;
}
