#include <stdio.h>

int myMax(int n1, int n2)
{
	n1 = n1+1*2;
	if(n1>n2)
	{
		return n1;
	}
	return n2;
}

void myProcedure(){
	printf("I hate potatoes\n");
}

int main()
{
	int biggest;
	int a = 5;
	int b = 7;

	myProcedure();
	// biggest++;

	biggest = myMax(a,b);
	myProcedure();

	printf("Value of a %d\n",a );

	myProcedure();

	printf("biggest  %d\n",biggest );
}