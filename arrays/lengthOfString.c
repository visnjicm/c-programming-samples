#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 10


void printArray(int arr[SIZE]);
int lengthString(char *str);

int main()
{
	//Enter code here
	int stringLength;
	char testStr[SIZE];
	gets(testStr);
	stringLength = lengthString(testStr);
	printf("%i\n", stringLength);


	return 0;
}

void printArray(int arr[SIZE])
{
	for (int i = 0; i<SIZE; i++){

                printf("%d ", arr[i]);
        }
	printf("\n");
}

int lengthString(char *str){

	int i = 0, length = 0;
	while (str[i] != '\0'){
		i++;
		length++;
	}

	return length;
}
