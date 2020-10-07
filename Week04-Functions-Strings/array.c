#include <stdio.h>

int main()
{
	int myfirstarray[5];

	// Important to notice, arrays start at 0
	myfirstarray[0] = 40;
	myfirstarray[1] = 4;
	myfirstarray[2] = 30;
	myfirstarray[3] = 12;
	myfirstarray[4] = 1;

	printf("On my position 3 i have %d\n", myfirstarray[3]);

	for(int i = 0; i<5; i++){
		printf("position %d value %d \n",i, myfirstarray[i] );
	}	

	// SOLUTION FOR TASK 3

	// Array with 10 integers
	int n[5];
	for(int i = 0; i<5; i++)
	{
		printf("Inform n %d\n",i );
		scanf("%d", &n[i]);
	}

	// Going through all my numbers
	int sum = 0;
	for (int i = 0; i < 5; ++i)
	{
		sum = sum+n[i];
		// printf("%d\n",n[i]);
	}
	float average = sum/5;
	printf("My average is: %.2f\n",average );
}







