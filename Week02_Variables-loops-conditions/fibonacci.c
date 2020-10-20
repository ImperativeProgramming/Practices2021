/*
	Create a sw that prints out the first 20 
	numebers of the Fibonacci series
	
	1
	1
	2
	3
	5
	8
	13
	...
*/
#include <stdio.h>
int main()
{
	
	//(1+1)=2,(2+1)=3,(3+2)=5
	int i = 0;
	int current=1;
	int previous=0;
	
	printf("%i \n", previous);
	
	for(i=0; i<20; i++)
	{
	    printf("%i \n", current);
		
		int helper = current;		
		current = current + previous;
		previous = helper;				
		
	}
	
}