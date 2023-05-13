#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define SIZE 100


void printArray(int arr[SIZE]);
int checkPalindrome(char *str);

int main()
{
	//Enter code here
	char testStr[SIZE];
	gets(testStr);
	printf("%i\n", checkPalindrome(testStr));


	return 0;
}

int checkPalindrome(char *str){
	int status = -1;
	int i = 0;
	int count = 0;
	while (str[i] != '\0'){
		i++;
	}

	for (int j = i-1; j>=0; j--){
		
		status = 1;

		if(str[count] != str[j]){
			status = 0;
			break;
		}
		count++;
	}

	return status;
}
