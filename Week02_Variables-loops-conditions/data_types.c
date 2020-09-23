#include <stdio.h>

int main()
{
	int number = 10;
	char myChar = 'C';
	double pi = 3.1314;

	// ONE LINE COMMENT 

	/*
		Multiple
		lines of 
		comments
	*/
	int anotherNumber = 24 + number;

	printf("potato how i print out \n");

	// Here I'm printing a number using the int placeholder
	printf("My number is: %d \n", number);

	printf("My number is actually %lu bytes\n", sizeof(number) );

	printf("My number + 10 is %d \n",number+10 );	

	printf("My char is %c and remember my numeber is %d \n", myChar, number );

	printf("My double is %f \n", pi);



}