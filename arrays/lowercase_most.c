#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SOURCE_SIZE 8
#define COUNTER_SIZE 'z'-'a'+1


int main()
{
	//Enter code here
	char source[SOURCE_SIZE] = {'a','a','a','r','c','k','m','m'};
	char counter[COUNTER_SIZE] = {0};

	for (int i = 0; i<SOURCE_SIZE; i++){
	
		counter[source[i]-'a']++;
	}

	int counter_max_index = 0;
	char max_letter;
	for (int i = 0; i<COUNTER_SIZE; i++){
	
		if (counter[counter_max_index]<counter[i]) counter_max_index = i;
	}

	max_letter = counter_max_index + 'a';

	printf("The letter %c appeared most of the times. Total of %d appearences.\n", max_letter, counter[counter_max_index]);


}

