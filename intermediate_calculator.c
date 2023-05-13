#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	//Enter code here
	printf("Enter operation: ");
	double fir_num;
	char oper;
	double sec_num;
	scanf("%lf%c%lf", &fir_num, &oper, &sec_num);
	

	double result;
	switch(oper)
	{
		case '+':
			result = fir_num + sec_num;
			printf("The result of the calculation is %.2lf\n", result);
			break;
		case '-':
			result = fir_num - sec_num;
			printf("The result of the calculation is %.2lf\n", result);
			break;
		case '*':
			result = fir_num * sec_num;
			printf("The result of the calculation is %.2lf\n", result);
			break;
		case '/':
			if (sec_num == 0) printf("Divide by zerror error! \n");
			else
			{
				result = fir_num / sec_num;	
				printf("The result of the calculation is %.2lf\n", result);
			}
			break;
		case '%':
			result = (int) fir_num % (int) sec_num;
			printf("The result of the calculation is %.0lf\n", result);
			break;
			
		default:
			printf("Bad input! \n");
			break;

	}



	return 0;
}
