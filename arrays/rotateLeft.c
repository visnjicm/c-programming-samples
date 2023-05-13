#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 5


void printArray(int arr[SIZE]);


int main()
{
	//Enter code here
	int pre_arr[SIZE] = {1,2,3,4,5};
	printf("Array pre-left rotation: \n");
	printArray(pre_arr);

	int post_arr[SIZE] = {0};
	printf("Array post-left rotation: \n");
	for (int i = 0; i<SIZE; i++){

		if (i == 0) post_arr[SIZE-1] = pre_arr[i];
		else post_arr[i-1] = pre_arr[i]; 
	}	
	printArray(post_arr);

	return 0;
}

void printArray(int arr[SIZE])
{
	for (int i = 0; i<SIZE; i++){

                printf("%d ", arr[i]);
        }
	printf("\n");
}
