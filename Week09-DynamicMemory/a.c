#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr = malloc(3*sizeof(int));
  //int *ptr = calloc(3, sizeof(int));

  *ptr = 2;
  free(ptr);
  ptr++;
  *ptr = 3;
  // ptr++;
  printf("%d\n", *ptr);

}
