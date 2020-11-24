#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
     int n = 0;
    // First I create an array where I'll store my ints
    int *numbersHead = (int *) malloc(sizeof(int)*1);
    // Create a pointer to the head of the array
    int *currentNumber = numbersHead;

    // I will create an interator of elements to know how many I have
    int elements = 0;

    printf("tell me the inputs or type \"exit\" \n");
    char input[50];
    // While my input isn't "exit" keep it going
    while(strcmp(input, "exit")!=0)
    {
        // read the first input
        scanf("%s", input);
        if(strcmp(input, "exit") == 0)
            continue;

        // convert it to integer
        int n = atoi(input);
        // printf("%p\n",numbersHead);
        numbersHead = realloc(numbersHead, sizeof(int)*(elements+1));
        // Using pointer arithmetics I add N to the last value
        *(numbersHead + elements) = n;
        // // And increase the elements so next round I'll add one more space
        elements++;

        int *prt = numbersHead;
        for(int i=0; i<elements; i++)
        {
          printf("%d\n",*prt);
          prt++;
        }

    }




    // printf("%d\n", n);


}
