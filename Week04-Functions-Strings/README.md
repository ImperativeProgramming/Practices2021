# C Programs Structure
*This class is based on [Professor Zoltán's Materia](http://gsd.web.elte.hu/lectures/c-en/c-lecture-2/), his [other material](http://gsd.web.elte.hu/lectures/c-en/c-lecture-5/) and [GeeksForGeeks Tutorials](https://www.geeksforgeeks.org/c-programming-language/)*

## Wrap up

During the last lecture we learned:
- While loop, for, do while
- Incrementors (++, --)
- Comparators
- What we learned doing the Fibonacci series?



## Warm up

Let's have a short warm up and play,

![1,2,pi](https://media.giphy.com/media/l41YtZOb9EUABnuqA/giphy.gif)

First let's learn a new function...

modulo(modulus): the remainder of an euclidian division e.g.: 10 mod 2 = 0, 3 mod 2 =1.

How to do it in C:

    // module of 3 divided by 2:
    3 % 2

Now that you know how to operate that, make a C program (from scratch) that will count from 1 to 100 and every time the number is a divider of 3 you should replace the number with "pi".

example:

    1
    2
    pi
    4
    5
    pi



## Functions
We got it from [Geeks for Geeks](https://www.geeksforgeeks.org/functions-in-c/)

### Why do we use functions?

- Reduce code redudancy
- Make code modular
- Provide abstraction

![Divide to Conquer](https://media.giphy.com/media/9S1zkYeluvYwzoj9pC/giphy.gif)

    #include <stdio.h>

    // An example function that takes two parameters 'x' and 'y'
    // as input and returns max of two input numbers
    int max(int x, int y)
    {
        if (x > y)
          return x;
        else
          return y;
    }

    // main function that doesn't receive any parameter and
    // returns integer.
    int main(void)
    {
        int a = 10, b = 20;

        // Calling above function to find max of 'a' and 'b'
        int m = max(a, b);

        printf("m is %d", m);
        return 0;
    }

The names we are going to use now on:

![Function structure](https://www.geeksforgeeks.org/wp-content/uploads/Function-Prototype-in-c.png)

## Task 1
Recreate the warm up exercise, make a function called "is_pi" that returns either 1 or 0 (zero) for the numbers divisible by 3.

### Arrays
Array is a block of sequential data, let's check a first example with an array containing 4 numbers.

    int j, numbers[4];
    numbers[0]=12;
    numbers[1]=13;
    numbers[2]=14;
    numbers[3]=15;
    for(j = 0; j < 4; ++j)
    {
      printf("&x[%d] = %d\n", j, numbers[j]);
    }

#### Task 2
Make an algorithm that reads 10 numbers and prints them out, later on, prints its average.

### Strings

A bit about strings in C

![](https://media.giphy.com/media/eeGcAuoE4yV48bihMs/giphy.gif)


![](https://media.giphy.com/media/46zGsq0JNimhzfkABV/giphy.gif)


How do we initialize "Strings"

      char c[] = "abcd";
      char c[50] = "abcd";
      char c[] = {'a', 'b', 'c', 'd', '\0'};
      char c[5] = {'a', 'b', 'c', 'd', '\0'};

How is it organized? (I hope Charles has a board marker this time...)

Writing a program that reads a vector of char...

    int main()
    {
        char str[15];
        printf("Enter a string: ");
        scanf("%s", str);
        printf("You entered %s.", str);
        return 0;
    }

This approach has a problem... Did you spot it?

Another way of doing it would be:

      int main()
      {
          char str[30];
          printf("Enter the string with space: ");
          fgets(str, sizeof(str), stdin);  // read string
          printf("Str: ");
          puts(str);    // display string
          return 0;
      }

## Task 2
Make a software that reads the user input and outputs an analysis of the word giving information like

- Prints out the word letter by letter
- Number of letters
- Number of unique letters
E.G.

      Welcome to the word checker, which word would you like us to check?
      - Potato
      P
      o
      t
      a
      t
      o
      6 letters
      4 Unique letters
      Unique letters: P, o, t, a

## Problems with reading words

[Example from here](https://www.geeksforgeeks.org/problem-with-scanf-when-there-is-fgetsgetsscanf-after-it/)


    // C program to demonstrate the problem when
    // fgets()/gets() is used after scanf()
    #include<stdio.h>

    int main()
    {
       int x;
       char str[100];
       scanf("%d", &x);
       fgets(str, 100, stdin);
       printf("x = %d, str = %s", x, str);
       return 0;
    }


Or

    // C program to demonstrate the problem when
    // scanf() is used in a loop
    #include<stdio.h>

    int main()
    {
        char c;
        printf("......Enter q to quit......\n");
        do
        {
            printf("Enter a character\n");
            scanf("%c", &c);
            printf("%c\n", c);
        }
        while (c != 'q');
        return 0;
    }

*One possible solution*

    We can make scanf() to read a new line by using an extra “\n”, i.e., scanf(“%d\n”, &x) .
*Or two*

    We can add a getchar() after scanf() to read an extra newline.

## Homework
Finish the list 1 of exercises
