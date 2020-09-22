# C Programs Structure
*This class is based on [Professor Zoltán's Materia](http://gsd.web.elte.hu/lectures/c-en/c-lecture-2/), his [other material](http://gsd.web.elte.hu/lectures/c-en/c-lecture-5/) and [GeeksForGeeks Tutorials](https://www.geeksforgeeks.org/c-programming-language/)*

## Wrap up

During the last lecture we learned:
- How the C software is structured
- How do make a loop  
- How to compile our software
- How to execute our software

## Warm up (TASK 1)

Create a software that greets yourself saying e.g.

    "Hi whatsup Amanda"



## Todays class

## Variables

- **char**: The most basic data type in C. It stores a single character and requires a single byte of memory in almost all compilers.
- **int**: As the name suggests, an int variable is used to store an integer.
- **float**: It is used to store decimal numbers (numbers with floating point value) with single precision.
- **double**: It is used to store decimal numbers (numbers with floating point value) with double precision.

### TASK 2
- Create a software with one integer variable *yearOfBirth*, another variable *currentYear*, initiate both with zero and later on, add 2020 to the *currentYear* and your year of birth to the *yearOfBirth* print out your age, print out with your name like the following.

      Hello Amanda, this year is the 23rd year of your life

### Printf and other things to make the previous exercise easier

Let's follow the example on [This link](https://www.geeksforgeeks.org/data-types-in-c/)

### Task 3
  - Rewrite the previous example using printf

### Conditionals
- If else

      if(something)
      {
        //this happens
      }
      else
      {
        //otherwise this will happen
      }

      if(this_happens)
        if (this_also_happens)
          {
              // this all will happen
          }

- Switch Case

      int day_of_week;
      //...
      switch ( day_of_week )
      {
        default: printf("Undefined"); break;
        case  2: printf("Monday");    break;
        case  3: printf("Tuesday");   break;
        case  4: printf("Wednesday"); break;
        case  5: printf("Thursday");  break;
        case  6: printf("Friday");    break;
        case  1:
        case  7: printf("Week-end");  break;
      }

### Task 4
Rewrite task 3 and write down the age with some mean comment e.g.:

     # If the person is older than 25 but younger than 30
     Welcome Amanda!
     The 30's are just around the corner eh...

1 - Make a menu with 4 options like the following:

     Welcome to our restaurant, please select from our delicacies:
     1 - Sweet Potato Fries
     2 - Sushi
     3 - Barbecue
     4 - Langos

2 - Add the libraries stdlib.h and time.h to the header

3 - Add the following line of code (this will generate a random number between 1 and 4):

     time_t t;
     srand((unsigned) time((&t)));
     int n = rand() % 5;

4 - Depending on the value of n, print a mean comment

     # n is 1
     You know that's not healthy right? You're not fooling anyone

     # n is 2
     Is it pay day or what?
