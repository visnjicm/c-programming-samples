#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	//Enter code here
	

	int rows;
	int count = 0;
	int last_num =1;
	int start_num = 1;
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	
	for(int i=1; i<=rows; i++)
	{

		for (int j = 1; j<=rows-i;j++)
		{
			printf(" ");
		}


		//print numbers in row loop
		for (int k = start_num; k<=(start_num+(i-1)); k++)
		{
			printf("%d ",k);
			last_num = k;
		}

		start_num = last_num + 1;


		printf("\n");

	}	


	return 0;
}
