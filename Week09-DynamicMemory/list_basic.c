#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point
{
	int x,y;
	struct Point *next;
};

int main()
{
    struct Point *head;
    head = malloc(sizeof(struct Point));
    head->x =10;
    head->y = 20;
    head->next = NULL;

    struct Point *element;

    element = malloc(sizeof(struct Point));
    element->x =11;
    element->y = 21;
    head->next  = element;
    element->next = NULL;

    struct Point *previous = element;
    element = malloc(sizeof(struct Point));
    element->x =20;
    element->y = 31;
    previous->next = element;
    element->next = NULL;

    element = head;
    while(element!=NULL)
    {
      printf("%d\n",element->x );
      element = element->next;
    }


}
