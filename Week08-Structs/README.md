
Up to now, our work was using very homogeneous data, either we used an integer, or a collection of chars, long integers and so on.

If the code gets more complex, this approach may be a bit hard to handle. therefore, we will learn a new approach for making this task easier.


## Structures 

Structures are heterogenous structures implemented in C, like in the picture bellow:
![](https://www.geeksforgeeks.org/wp-content/uploads/Structure-In-C.png)

Example of structure:

    #include<stdio.h>

    struct Point
    {
       int x, y;
    };

    int main()
    {
       struct Point p1 = {0, 1};

       // Accesing members of point p1
       p1.x = 20;
       printf ("x = %d, y = %d", p1.x, p1.y);

       return 0;
    }

Example with designated initialization:

    #include<stdio.h>

    struct Point
    {
       int x, y, z;
    };

    int main()
    {
       // Examples of initializtion using designated initialization
       struct Point p1 = {.y = 0, .z = 1, .x = 2};
       struct Point p2 = {.x = 20};

       printf ("x = %d, y = %d, z = %d\n", p1.x, p1.y, p1.z);
       printf ("x = %d", p2.x);
       return 0;
    }



Example with Array:


    #include<stdio.h>

    struct Point
    {
       int x, y;
    };

    int main()
    {
       // Create an array of structures
       struct Point arr[10];

       // Access array members
       arr[0].x = 10;
       arr[0].y = 20;

       printf("%d %d", arr[0].x, arr[0].y);
       return 0;
    }

### Task 1
 - Implement a list with 5 struct Point (Being this a point w/ X, y);



### Bubble sort
We have all the knowledge to use it, now is time to put hands on, in the image bellow, you have the bubblesort method explained.

![](https://codingcompiler.com/wp-content/uploads/2017/10/bubble-sort-in-c-768x456.png)

Let's have a different (and fun) example:
https://www.youtube.com/watch?v=lyZQPjUT5B4

### Task 2
 - Sort the 5 struct point (first evaluate x then y).


Example:

      // The points 
      p[0]={2,3}
      p[1]={4,5}
      p[2]={1,5}
      p[3]={4,3}
      p[4]={1,2}

      // Should become

      p[0]={1,2}
      p[1]={1,5}
      p[2]={2,3}
      p[3]={4,3}
      p[4]={4,5}

### Task 3
**For the tasks bellow, you don't need to read input from the user, it's recommended that you simply fill those via code**
- Create a struct matrix, which should hold a 3X3 matrix
- Create a function that takes a matrix and prints out the elements of it's main diagonal (i.e. elements a11, a22 and a33)
- Create a function that takes two matrices and prints out it's sum