#include <stdio.h>

int main()
{	
	//for(int i = 0; i<10; i++)
	// for (initial value, condition, step)
	for(int index = 0; index<10; index = index + 1)
	{
		printf("My index is %d\n", index);
		if(index>5)
		{
			printf("And it's actually bigger than 5!!!! \n");
		}
	} 

	if(3<5)
	{
		printf("3 is smaller than 5");
	}
	else
	{
		printf("3 is bigger or equal to 5");
	}

	// < smaller
	// <= smaller or equal
	// > bigger
	// >= bigger or equal
	// == equal
	// != different



	
}