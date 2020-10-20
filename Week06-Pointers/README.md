# Pointers

![](https://media.giphy.com/media/L3ERvA6jWCd0qO4NdX/giphy.gif)

## Little Pointer never killed nobody


Let's first have an example, 

![](https://media.giphy.com/media/TL3D6O3mw5EmQ/giphy.gif)

- Let's say you have two bags of oranges in your house and you need to count them;

- You mention this to Charlie on teams and he was like, "Yo man, I can give you a hand with that, I know how to count oranges! I just need the oranges";

- You cannot remove the oranges from the basement, but you have a cloning machine and you can clone the two bags of oranges;

**HOW CAN YOU TAKE THE ORANGES TO CHARLIE?**

You have two options:

1 (how we did until now) - You clone the two bags of oranges and take it to Charles, it's expensive, but works fine.

2 - You send the address of your house to Charles and tell him to go there do the counting.

Some things we need to notice:
- Fatty Charlie may eat an orange or two, if he eats from the cloned ones, your oranges are safe, but if he eats from your basement, it will change the total value of oranges;

- If you clone oranges, now you need space to store 4 bags of oranges instead of 2.


**This is what we will be talking about**

![](https://www.geeksforgeeks.org/wp-content/uploads/How-Pointer-Works-In-C.png)

Pointers are nothing but addresses of memory, so when you call a function using the reference instead of making a clone of the variables. 

Let's see the oranges example implemented (check orange_counter.c file)

### Try by your own

Implement a function with void return that takes 3 arguments (all ints), num1, num2 and \*sum, where sum is a pointer. The function changes the value of sum to correspont to num1+num2;

### Example

[source](https://www.geeksforgeeks.org/pointers-in-c-and-c-set-1-introduction-arithmetic-and-array/)

Let's build an example together (ExamplePointers.c)

![](https://media.geeksforgeeks.org/wp-content/uploads/pointers-in-c.png)

## Arrays and Pointers

Arrays as we have seen until now, are pointers (anyone remember the scanf of strings?).

But why?

Remember the cloning machine example? It would not make sense to clone all the oranges, and in C we won't clone any array.

In order to make our life easier when dealing with pointers to Arrays, we have pointer arithmetics. 

We have the usual arithmentic operators like: sum (+/+=), subtraction (-/-=),  increment(++), decrement (--).

"Wait, if a pointer is something like, 0x7fffa057dd4, what will be the result of an increment? 0x7fffa057dd5?  Sounds very complicated"

Nope, we will use the arithmentic operators to deal with arrays, somehow the same way we were doing until now with our "i" in like array[i].

### Example
Let's check together an example (Example1.c, Example2.c)

![](https://media.geeksforgeeks.org/wp-content/uploads/Untitled-presentation-31.png)

Notice now that the arithmetic operators work according to the size of the elements, not it's values.



### Task1/Example3 
Let's take a look on a new example, let's do the following:
- One array of ints

        int arr[5];

- Pointer to an integer

		int *ptr;

- Pointer to an array of 5 integers
		int (*ptr)[5];


Let's point the int pointer to the first element of our array pointer and the array itself.

What happens when you use the increment operator in both cases?

Now let's check together Example3.c
![](https://media.geeksforgeeks.org/wp-content/uploads/Diagram1-1.png)

## Task2

Create a function called swap, that takes two arrays of chars and replace their values, like the following:

OBS: The function swap must work with pointers

    char name[] =  "George";
    char secondName[] = "Fillip";

    swap(name, secondName);
    //name = Fillip
    //secondName = George


## String Operators

Now that we understand a little better how the pointers work, have you ever tried to so something like...

	char name[] =  "George";
    char secondName[] = "Fillip";
    name = secondName;

What happens and why?

We can't treat a bag of potatoes the same way we treat a single potato

![](https://media.giphy.com/media/nwqr3rLcZizuM/giphy.gif)

The values inside an array to be copied inside another array need to be copied one by one. Not only for copying, we also have other operations that require such treatment, luckly we have a set of functions to help us out.

### strcmp ([Source](https://www.geeksforgeeks.org/sorting-strings-using-bubble-sort-2/))

    int strcmp(const char *str1, const char *str2)

This function return values that are as follows −

* if Return value < 0 then it indicates str1 is less than str2.

* if Return value > 0 then it indicates str2 is less than str1.

- if Return value = 0 then it indicates str1 is equal to str2.

### strcpy ([Source](https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.htm))

    int strcpy(const char *str1, const char *str2)

This function copies the value from str to str2

### strcat
    char *strcat(char *dest, const char *src)

**
This function concatenates two strings, including the first one at the end of the second pointer. It assumes the second space has enough space to the operation;

### strdup

      char *strdup(const char *dest)

**
This function allocate a space in memory dynamically, and returns the memory address where it stored the given string.

    // C program to demonstrate strdup()
    #include<stdio.h>
    #include<string.h>

    int main()
    {

        char source[] = "GeeksForGeeks";

        // Yeah, you can do that if you initialize at the
        // same time of the declaration

        // A copy of source is created dynamically
        // and pointer to copy is returned.
        char* target = strdup(source);  

        printf("%s", target);
        return 0;
    }


##Task 3

Create your own versions of strcpy and strcat using your knowledge in pointers.


## Last but not least

Have a nice Autumn Break, we come back on the 4th of November
- Take care of yourself
- Rest
- Do something for you

![](https://media2.giphy.com/media/muCo9BLS7vjErTON27/giphy.gif?cid=ecf05e47j3k9i8cjifie8nibh3qd95ezzowjnsk0nrz6um8z&rid=giphy.gif)
