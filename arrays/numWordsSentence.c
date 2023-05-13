#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define SIZE 100


void printArray(int arr[SIZE]);
int numWords(char *str);

int main()
{
	//Enter code here
	int total;
	char testStr[SIZE];
	gets(testStr);
	total = numWords(testStr);
	printf("%i\n", total);


	return 0;
}

int numWords(char *str){
	char prev_char = ' ';
	int i = 0, words = 0;
	while (str[i] != '\0'){

		if (str[i] != ' ' && prev_char == ' ') words ++;
		prev_char = str[i];
		i++;
	}

	return words;
}
