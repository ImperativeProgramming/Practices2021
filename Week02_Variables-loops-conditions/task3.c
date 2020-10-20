#include <stdio.h>

int main()
{
	int currentYear = 0;
	int yearOfBirth = 0;
	
	currentYear = 2020;
	
	printf("When were you born?\n");
	scanf("%d", &yearOfBirth);
	
	yearOfBirth = 1994;
	
	printf("Hello Amanda, this year is the %dth year of your life",currentYear-yearOfBirth);
	
}