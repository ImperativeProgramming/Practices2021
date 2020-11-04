# C Files
*This class is based on  [GeeksForGeeks Tutorials](https://www.geeksforgeeks.org/basics-file-handling-c/)*

## But before starting
- RECAP
- Assignment 2
- Loops
- No compilation error doesn't mean the code is right

Up to now, everything we did vanished when we closed our software or shut down our computer. This is not how real life works usually, most of our applications read and write from resources in order to save information (aka state). Therefore, today we will learn how to save information inside a file.

For performing that action, there are 4 needed actions, **open the file** aka search for the file and open it, unless it doesn't exist, in that case we need to create and then open, **getting  information** from the file, reading from it, and/or **writing information** to the file, and, finally, **close** the file, so that other applications can have access to it.

These operations are managed by the functions shown in the table bellow.

## File Functions
![](https://media.geeksforgeeks.org/wp-content/uploads/File-functions.jpg)

Notice that opening files requests us to define "opening modes", here is where we will define how we would like to open our file and for which purposes. We also define where our file will be pointing when we start writing or reading from it. 

## Opening modes
* **“r”** READING – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the first character in it. If the file cannot be opened fopen( ) returns NULL.
* **“w”** WRITING – Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.
* **“a”** APPEND – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.
* **“r+”** READ AND WRITE– Searches file. If is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the first character in it. Returns NULL, if unable to open the file.
* **“w+”** WRITE AND READ– Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist a new file is created. Returns NULL, if unable to open file.
* **“a+”** READING AND APPENDING– Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.

### Task 1
* Create a software in C that opens a file and write "Heeeeellooow there", this file should be called "potato.txt"
* Create a software that always adds "that's it folks" to the end of potato.txt (note: It should not override what's already in the file)

## Other functions we will use

### strtok
This function splits a String into an array of strings,  

Let's check together the strtok example in strtok.c

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


## Atoi (converts numbers that are stored as Strings into Int)

*atof* is the brother that does the same with floats

    #include <stdlib.h>
    #include <stdio.h>

    int main(void)
    {
        int i;
        char *s;

        s = " -9885";
        i = atoi(s);     /* i = -9885 */

        printf("i = %d\n",i);
    }

## Task

* Create a program (using C duh) that prints out in a file, the first 20 numbers of the Fibonacci Series
* Create a second software that reads from a file integer numbers (line by line) and prints on the screen it's successor (e.g. 5 becomes 6, 10 becomes 11 and so on)

## Assignment 3
The assignment is already on Canvas, now let's have some important information that may help us out.

* The letters in C have an equivalent value as *unsigned int*, i.e. you can compare letters with an equivalent in numbers (let's see examples)

* You can use scanf to read an entire line with spaces if you use the regex "%[^\n]s" (let's see an example too)

* The key for solving the assignment 3 is DIVIDE, DIVIDE AND DIVIDE THE DIVIDED INTO DIVISIONS. The whole solution needs you to think in steps, 

