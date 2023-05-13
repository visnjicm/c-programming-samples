#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	//Enter code here
	//Question1
	
	int val1;
	int val2;
	printf("Enter two integer values, seperate them by a space: \n");	
	scanf("%d%d", &val1, &val2);

	if(val1 == val2) printf("equal\n");
	else printf("not equal\n");

	//Question2
	
	int val3;
	printf("Enter three integer values, seperate them by a space: \n");
        scanf("%d%d%d", &val1, &val2, &val3);

	if((val1 == val2) && (val1 == val3)) printf("equal\n");
        else printf("not equal\n");

	//Question3

	int num;
	printf("Enter a three digit integer values \n");
	scanf("%d", &num);

	val1 = num/100;
	val2 = (num%100)/10;
	val3 = num%10;

	if ((val1<=val2))
	{
		if (val2<=val3)
		{
			printf("ascending\n");
		}
		else
		{
			printf("not ascending\n");
		}
	}
	else {
		printf("not ascending\n");
	}

	//Question4
	double num_dble;
	printf("Enter a number: \n");
	scanf("%lf", &num_dble);

	if (num_dble > 0 ){
		printf("1\n");
	}
	else if (num_dble <0){
		printf("-1\n");
	}
	else{
		printf("0\n");
	}




	return 0;
}
