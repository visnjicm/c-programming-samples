#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	//Enter code here
	int n = 0;
	printf("Enter a integer n: ");
	scanf("%d", &n);

	for (int i = 1; i<=n; i++)
	{
		for (int j = 1; j<=i; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}



	return 0;
}
