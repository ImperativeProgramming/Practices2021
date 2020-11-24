# Consultation and Exercises

Today is dedicated for the assignment 4 and for finishing the last week's N-1.


##  realloc
Let's say you have just created an array of ints using malloc like we learnt last class:

    int *ptr = (int *) malloc(sizeof(int)*3);

We know this will allocate a continuous memory space for 3 integers, but what if now we would like to store 5 spaces instead of 3?

In this case, we can call the function realloc, giving it the new size for out array:

    int *ptr = (int *) realloc(ptr, sizeof(int)*5);

Let's check together the example of last week (file week8-task2.c)

## Task of Today

## IMPORTANT
*This task shall be developed during the class and your presence is mandatory, please stay online, you should complete as further as you can and upload it to Canvas.*

Continuing the N-1 of last week (which this week counts as a micro-exam), develop the following functions:

- Create a function findClient where you receive a client name and the head and retrieves a pointer to its struct. The function signature should look like the following:

      struct Client * findClient(struct Client* head, char name[])

- Create a function swap, that receives two pointers to struct Client and swaps its contents.

      void swapClients(struct Client* c1, struct Client* c2)

- Create a function calculateQueueSize that returns an integer representing the size of the queue.

      int calculateQueueSize(struct Client * head)

The main:

    int main()
    {
    	// char name[] = "josh";
    	struct Client* head;
    	head = spawnClient("Stuart", 'h');
    	generateFakeQueue(head);
    	printQueue(head);
    	head = proceedToCashier(head);
    	head = proceedToCashier(head);
    	printQueue(head);
    	head = proceedToCashier(head);
    	head = proceedToCashier(head);
    	printf("Queue Size: %d\n", calculateQueueSize(head));
    	swapClients(findClient(head, "Antonio"), findClient(head, "Raymond"));
    	organizeQueue(head);
    	printQueue(head);

    }

Fake generating queue function:

    void generateFakeQueue(struct Client* head){
    	addClient(head, spawnClient("josh", 'a'));
    	addClient(head, spawnClient("Maria", 'a'));
    	addClient(head, spawnClient("Giuseppe", 'a'));
    	addClient(head, spawnClient("Antonio", 'c'));
    	addClient(head, spawnClient("Charlie", 'a'));
    	addClient(head, spawnClient("Raymond", 'r'));
    }

Expected result:

      Client Stuart Priority: h
      Client josh Priority: a
      Client Maria Priority: a
      Client Giuseppe Priority: a
      Client Antonio Priority: c
      Client Charlie Priority: a
      Client Raymond Priority: r
      Dear Stuart please proceed to cashier
      Dear josh please proceed to cashier
      Client Maria Priority: a
      Client Giuseppe Priority: a
      Client Antonio Priority: c
      Client Charlie Priority: a
      Client Raymond Priority: r
      Dear Maria please proceed to cashier
      Dear Giuseppe please proceed to cashier
      Queue Size: 3

## If you finished
Feel free to take your time and start the assignment 4 which is already on Canvas.
