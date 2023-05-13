#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//num = 5;
//6, 8, 10, 3, 1, 7, -1

int lessThanNum(int num){
	
	int temp; 
	scanf("%d", &temp);

	if (temp == -1){
		
		return 0;
	}

	if (temp < num){
		return 1 + lessThanNum(num);
	}
	else return 0 + lessThanNum(num);

}


int main()
{
	//Enter code here
	int num;
	int total;
	printf("Enter the value of num: ");
	scanf("%d", &num);
	total = lessThanNum(num);
	printf("%d\n", total);	


	return 0;
}
