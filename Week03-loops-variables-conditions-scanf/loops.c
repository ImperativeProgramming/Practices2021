#include <stdio.h>

int main()
{	
	// while my file is not over
	// while my array still has members
	// while the user is typing
	// while(1+1>=2){
	// 	// ctrl + C (to stop)
	// 	printf("doing something\n");
	// }

	int i;
	for(i = 0; i<10; i++){
		printf("for Loop: %d\n", i);
	}

	printf("After my for loop %d\n", i);

	i =0;
	while(i<10){
		i++;
		printf("while Loop: %d\n", i);	
	}
	printf("After my while loop %d\n", i);


	// I use the do while I guarantee that it will 
	// Execute at least once
	i = 10;
	do{
		printf("Do while loop: %d\n",i);
		i++;
	}while(i<10);
}
