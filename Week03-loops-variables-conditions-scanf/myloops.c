#include <stdio.h>

int main()
{
	//while
	int i = 0; // i comes from index
	while(i <= 10)
	{
		printf("My number via while is %d\n", i);
		i++; // this is the same as i = i+1;
	}
	printf("My number after the while is %d\n", i);


	//for
	//int j;
	for(int j=0; j<=10; j++){
		printf("My number via for is %d\n", j);
	}
	// printf("My number after the for is %d\n", j);

	//do while
	i = 0;
	do{
		printf("My i is now: %d\n",i );
		i++;
	}while(i<10);


}