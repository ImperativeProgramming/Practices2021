#include<stdio.h>


int orange_paramenter_counter(int bag1, int bag2){
	printf("What the bag actually looks like by paramenter: %d\n", bag1);
	// bag1 = 20000000;
	return bag1+bag2;
}

// This function takes two pointers as reference
int orange_counter_reference(int *bag1, int *bag2){
	
	printf("What the bag actually looks like by reference: %p\n", bag1);
	// by *bag2 = I'm changing the value of the int inside bag1 pointer
	// When using *bag I'm accessing the content of the int
	//*bag2 = *bag2 -2;
	return *bag1+*bag2;
}

int main()
{
	int oranges_bag1 = 20;
	int oranges_bag2 = 23;

	printf("Counting by paramenter %d\n", orange_paramenter_counter(oranges_bag1, oranges_bag2));
	printf("Oranges in bag 1 (after paramenter call): %d\n", oranges_bag1);
	printf("Oranges in bag 2 (after paramenter call): %d\n", oranges_bag2);

	printf("\n###########\n\n");

	printf("Counting by reference %d\n", orange_counter_reference(&oranges_bag1, &oranges_bag2));
	printf("Oranges in bag 1 (after reference call): %d\n", oranges_bag1);
	printf("Oranges in bag 2 (after reference call): %d\n", oranges_bag2);

}