#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//array macros
#define SIZE 7


//day macros
#define SUNDAY 0
#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6



double avg7(double temp[SIZE])
{
	double sum = 0;
	int count = 0;

	for (int i=0; i<SIZE; i++)
	{
		sum = sum + temp[i];
		count++;
	}


	return (sum/count);
}

double max7(double temp[SIZE])
{
	double max = temp[0];

	for (int i=0; i<SIZE; i++)
	{
		if (max<temp[i])
		{
			max = temp[i];
		}
	}

        return max;
}


double min7(double temp[SIZE])
{
	double min = temp[0];

        for (int i=0; i<SIZE; i++)
        {
                if (min>temp[i])
                {
                        min = temp[i];
                }
        }

        return min;
}


int main()
{
	//Enter code here
	double temp[SIZE];

	for (int i=0; i<SIZE; i++)
	{
		switch (i)
		{
			case (SUNDAY):
				printf("Temperature SUNDAY: \n");
				scanf("%lf",&temp[SUNDAY]);
				break;
			case (MONDAY):
                                printf("Temperature MONDAY: \n");
                                scanf("%lf",&temp[MONDAY]);
                                break;
			case (TUESDAY):
                                printf("Temperature TUESDAY: \n");
                                scanf("%lf",&temp[TUESDAY]);
                                break;
			case (WEDNESDAY):
                                printf("Temperature WEDNESDAY: \n");
                                scanf("%lf",&temp[WEDNESDAY]);
                                break;
			case (THURSDAY):
                                printf("Temperature THURSDAY: \n");
                                scanf("%lf",&temp[THURSDAY]);
                                break;
			case (FRIDAY):
                                printf("Temperature FRIDAY: \n");
                                scanf("%lf",&temp[FRIDAY]);
                                break;
			case (SATURDAY):
                                printf("Temperature SATURDAY: \n");
                                scanf("%lf",&temp[SATURDAY]);
                                break;
			default:
				printf("Error! \n");
				exit(0);
		}
	}

	printf("average temp: %.2lf \n", avg7(temp));
	printf("min temp: %.2lf \n", min7(temp));
	printf("max temp: %.2lf \n", max7(temp));
		


	return 0;
}
