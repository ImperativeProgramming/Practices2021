#include <stdlib.h>
#include <stdio.h>
int main()
{
  FILE *fpointer;

  fpointer = fopen("fibo.txt","r");
  if(fpointer == NULL){
    printf("ERROR OPENING THE FILE\n");
    return 1;
  }

  char number[10];
  int i;
  while(fgets(number, 10, fpointer) != NULL)
  {
    i = atoi(number);
    printf("%d\n",i+1 );
  }

  fclose(fpointer);
}
