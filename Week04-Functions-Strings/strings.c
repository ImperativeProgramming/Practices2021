#include <stdio.h>

int main()
{
	// Initialize the string
	// char myString[50]="potato";
	// declaring the string
	char myString[50];

	// reading a string input from the user
	scanf("%s", myString);

	// Printing the size of an array
	// printf("size of %lu\n", sizeof(myString));

	int i = 0;
	while(myString[i] != '\0')
	{
		printf("%c\n", myString[i] );
		i++;
	}

}