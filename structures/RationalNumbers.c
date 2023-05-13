#include <stdio.h>
#include <stdlib.h>
#include <math.h>



typedef struct rational_number{
	
	int numerator;
	int denominator;

} Rational;

void increment (Rational* number){
	(*number).numerator += (*number).denominator;
}

void decrement (Rational* number){
	(*number).numerator -= (*number).denominator;
}

Rational addition (Rational num1, Rational num2){

	// 1/3 + 1/2 = 2*(1/3) + 3*(1/2)
	Rational result;
	result.numerator = (num2.denominator*num1.numerator) + (num1.denominator*num2.numerator);
	result.denominator = (num1.denominator*num2.denominator);

	return result;
}

Rational substraction (Rational num1, Rational num2){

	Rational result;
        result.numerator = (num2.denominator*num1.numerator) - (num1.denominator*num2.numerator);
        result.denominator = (num1.denominator*num2.denominator);

	return result;
}

Rational multiplication (Rational num1, Rational num2){

	Rational result;
	result.numerator = num1.numerator*num2.numerator;
	result.denominator = num1.denominator*num2.denominator;

	return result;
}

Rational division (Rational num1, Rational num2){

	Rational result;
	result.numerator = num1.numerator*num2.denominator;
	result.denominator = num2.numerator*num1.denominator;

	return result;
}



int main()
{
	//Enter code here	
	Rational num1 = {3, 5};
	Rational num2 = {4, 6};

	Rational result;

	printf("Rational number 1: %d/%d\n", num1.numerator, num1.denominator);
	printf("Rational number 2: %d/%d\n", num2.numerator, num2.denominator);

	result = addition(num1, num2);
	printf("num1 + num2 = %d/%d\n", result.numerator, result.denominator); 
	

	result = substraction(num1, num2);
        printf("num1 - num2 = %d/%d\n", result.numerator, result.denominator);


	result = multiplication(num1, num2);
        printf("num1 * num2 = %d/%d\n", result.numerator, result.denominator);


	result = division(num1, num2);
        printf("num1 / num2 = %d/%d\n", result.numerator, result.denominator);


	increment(&num1);
        printf("num1 after increment = %d/%d\n", num1.numerator, num1.denominator);



	return 0;
}
