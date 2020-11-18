#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

int main()
{
    int n = 0;

    printf("tell me the inputs\n");
    scanf("%d", &n);
    int *number = (int *) malloc(sizeof(int)*n);
    int *head = number;
    for(int i=0; i<n; i++){
      printf("inform n %d\n",i+1 );
      scanf("%d",number);
      number++;
    }

    number = head;
    for(int i=0; i<n; i++)
    {
      printf("%d\n",*number);
      number++;
    }
    // printf("%d\n", n);


}
