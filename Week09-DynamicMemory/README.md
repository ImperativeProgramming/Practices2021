# Dynamic Memory Allocation

Up to now every time we needed to use memory for whatever, we had everything planned in the beginning of the code and used that exact amount of memory. This imposes a serious limitation to our work, several times.

![](https://media.giphy.com/media/v6aOjy0Qo1fIA/giphy.gif)


From now on, we will be able to make it fit... The list of functions we will use are:

- **malloc()**
- **calloc()**
- **free()**
- **realloc()**

## malloc
This function is used to reserve a single block of space in memory. It will always return a pointer and requires us to inform the size we would like to allocate in bytes.

    ptr = (cast-type*) malloc(byte-size)

Where:
- *ptr* is my pointer variable
- *casting* is how we call when we try to "force" a return to be converted to a certain variable (no it doesn't work to convert Strings to ints), and in this case it's a casting to a pointer of a given type.
- *byte-size* is the integer representing the size.

      int *ptr;
      ptr = (int*) malloc(sizeof(int));

Remember sizeof brings us the size in bytes of a given variable.

**Do you remember the struct Point from last class?**

We could reserve a space in memory for that struct by doing:

     struct Point *myPoint;
     myPoint = malloc(struct Point);

Example from [GFG](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/):

![](https://www.geeksforgeeks.org/wp-content/uploads/Malloc-function-in-c.png)

## calloc
Calloc is pretty similar to malloc, the main difference is the calling (see image bellow) where we identify a multiplier and then the space (instead of multiplying). Another difference is that **calloc initializes the memories with zeros**. That sounds pretty usefull, but, this extra task has a cost for the execution.

Example from [GFG](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/):
![](https://www.geeksforgeeks.org/wp-content/uploads/calloc-function-in-c.png)

## Free
Now imagine that you reserve a space in memory and notice you need a bit more, and a bit more and so on... Soon your memory will be fully booked, this is what we call "memory leaking".

While for our software that starts now and finishes in 20 milliseconds it doesn't mean much, for a server application, this can be a huge problem.
Let's see this example from [GFG](https://www.geeksforgeeks.org/what-is-memory-leak-how-can-we-avoid/)


    #include <stdlib.h>   
    void f()
    {
       int *ptr = (int *) malloc(sizeof(int));

       /* Do some work */

       return; /* Return without freeing ptr*/
    }
![](https://media.giphy.com/media/3o6Mb36zzO2TyvHriw/giphy.gif)

How can we solve the problem that's created above?

One simple way is by calling the function **free**

Syntax:

    free(ptr)

## Task 1

Create a software that process the folllowing steps:

1 - Asks the user a quantity of inputs he would like to give
2 - Asks the inputs (integers) one by one to the user
3 - Process the user entries, printing the elements

## Task 2

Recreate the previous exercise and instead of asking the number of elements, request the user to type the int entries and when he's over to type "exit". Notice, you don't need to worry about the user typing other texts than "exit".

## Lists

[source](https://www.geeksforgeeks.org/data-structures/linked-list/)

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers as shown in the below image:

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png)

In simple words, a linked list consists of nodes where each node contains a data field and a reference(link) to the next node in the list.

Interested in more? Read e.g. about [linked lists vs arrays](https://www.geeksforgeeks.org/linked-list-vs-array/).

## Task N-1
What's the N-1 task?
If you succeed in this task (fully succeed) it will replace one of your quizzes or hackerrank results

**#############IMPORTANT##########**

Due to the large amount of plagiarism, you are required to keep your comments and old code trials into your code, we don't want "clean code". Comment out your printfs and keep them there.

**################################**

You are responsible for managing the new queueing of Potato Banks, and since you now know how to do a Linked List, you can build up this queueing system to your customers using C, for that, do the following:

- Create a struct Client with name and priority (a letter);
- Create a function spawnClient, that takes name and priority, creates a new client and returns its pointer.

      struct Client * spawnClient(char name [], char priority)
- Create a function addClient like the following:

      void addClient(struct Client *head, struct Client *client)
This function should take the head of the list and a new Client which should be added to the end of the list.

- Create a function printQueue that prints all the people in the list
- Create a function proceedToCashier, that tells who should proceed to the queue and  **removes** the person in the head of the queue and returns the new head.
      struct Client * proceedToCashier(struct Client* head)

- Create a function that generates a queue adding 5 clients (doesn't need to be user input).


The following main:

      int main()
      {
      	struct Client* head;
      	head = spawnClient("Stuart", 'h');
      	generateFakeQueue(head);
      	printQueue(head);
      	head = proceedToCashier(head);
      	head = proceedToCashier(head);
      	printQueue(head);
      	head = proceedToCashier(head);
      	head = proceedToCashier(head);      	      	
      }

should produce a similar output to:

      Client Stuart Priority: h
      Client josh Priority: a
      Client Maria Priority: a
      Client Giuseppe Priority: a
      Client Antonio Priority: a
      Client Charlie Priority: a
      Dear Stuart please proceed to cashier
      Dear josh please proceed to cashier
      Client Maria Priority: a
      Client Giuseppe Priority: a
      Client Antonio Priority: a
      Client Charlie Priority: a
      Dear Maria please proceed to cashier
      Dear Giuseppe please proceed to cashier
      Client Antonio Priority: a
      Client Charlie Priority: a
