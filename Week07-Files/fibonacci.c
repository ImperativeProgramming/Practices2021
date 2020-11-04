
#include <stdio.h>
int main()
{


	int i = 0;
	int current=1;
	int previous=0;
  FILE *myFile;

  myFile = fopen("fibo.txt", "w");


	fprintf(myFile, "%i \n", previous);

	for(i=0; i<20; i++)
	{
    fprintf(myFile, "%i \n", current);
		int helper = current;
		current = current + previous;
		previous = helper;
	}

  fclose(myFile);

}
