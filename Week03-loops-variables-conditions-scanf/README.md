# C Programs Structure
*This class is based on [Professor Zoltán's Materia](http://gsd.web.elte.hu/lectures/c-en/c-lecture-2/), his [other material](http://gsd.web.elte.hu/lectures/c-en/c-lecture-5/) and [GeeksForGeeks Tutorials](https://www.geeksforgeeks.org/c-programming-language/)*

## Wrap up

During the last lecture we learned:
- Data Types
- printf
- If and Else structures
- Review Data Types cheatsheet

### QUIZZ

### Warm up (TASK 1)
Let's first learn how to use scanf, then we can try to solve one of the exercises from last week together...

From the exercises list 1 now, solve the problems from the section "Standard IO" until the 6th exercise.


## Todays class - Loops

![Spinning doggo](https://media.giphy.com/media/13Mh8TeB1r2nEQ/giphy.gif)

- While and For

      #include <stdio.h>
      int main()
      {
        int t[10];
        int i = 0;
        while( i < 10 )
        {
          t[i] = i;
          ++i;
        }
        for ( i = 0; i < 10; ++i )
        {
          printf("%d ", t[i]);
        }
        return 0;
      }

- Do while

      #include <stdio.h>

      int main()
      {
          // Initialization expression
          int i = 2;

          do {
              // loop body
              printf("Hello World\n");

              // Update expression
              i++;
          }
          // Test expression
          while (i < 1);

          return 0;
      }

### Task 2

Make a software that prints out the first 20 numbers of the Fibonacci series

## Functions
Extract from [Geeks for Geeks](https://www.geeksforgeeks.org/functions-in-c/)

We can almost call it a day, first let's learn what functions are.

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

## Homeworks
- Make a function called is_even, takes an integer as parameter and returns 1 in case the number is an even number otherwise returns 0
- Write a program which adds two positive integers and produces a result which is negative! Explain what happens!
