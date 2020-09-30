#include <stdio.h>

int sumTwoNumbers(int n, int n2)
{
	return n+n2;
}

void count(int n){
	
	for(int i=0; i<=n; i++)
		printf("%d\n",i);

	n = n+20;
	printf("My number inside the function is %d\n", n);
}

int main()
{
	int myInt;
	
	char c = 'w';
	//1st the specifier of my variable
	//2nd My Variable
	scanf("%d", &myInt);
	printf("My number %d\n", myInt);

	count(myInt);

	printf("My number is still %d\n", myInt);	

	return 0;

}

// Read an int (x) from the user
// Print out x times "Good Morning"
// E.G. the user types 3
//GOOD Morning
//GOOD Morning
//GOOD Morning