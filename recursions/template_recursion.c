#include <stdio.h>
#include <stdlib.h>
#include <math.h>



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


	return 0;
}
