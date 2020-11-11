#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point
{
	int x,y;
	char * name;
	struct Point *thepointer;
};

int main()
{
	struct Point *myPoint = malloc(sizeof(*myPoint)); // = {15,16, "Josh"};
	myPoint -> x = 10;
	myPoint -> y = 20;
	myPoint -> name = strdup("Josh");
	//free(*myPoint)
	
	printf("x = %d, y = %d", myPoint->x, myPoint->y);
	printf("\n %s", myPoint->name);
	
	
}