#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Enter code here
	float data;
	printf("Enter the float data ");
	scanf("%f", &data);
	
	float whole_data = (int) data;
	float dec_data = data - whole_data;
	printf("The decimal part is %f", dec_data);	


	return 0;
}
