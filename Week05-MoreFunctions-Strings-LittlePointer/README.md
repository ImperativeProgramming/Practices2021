# Week 5

## Wrap up

During the last lecture we learned:
- How do we declare a function
- What is a parameter in a function?
- Variables Scope
- Assignment Correction consideration

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




## Organizing your code nicely
![](https://media.giphy.com/media/yaff4iMtl189a/giphy.gif)

## Dividing the code into new files/folders
[Source and more examples](https://www.geeksforgeeks.org/c-c-include-directive-with-examples/), [even more examples](https://www.geeksforgeeks.org/write-header-file-c/)

Up to now it didn't make much sense but of course as we learn more things, it makes more sense to divide our code in different files to have it more organized.

Check the example on the files in this folder where *main.c* adds *source/cool_functions.c*.

**Notice that** this is just a way to help you organizing your code, the usage of header files and other attributes are necessary for a good organization of a bigger structure, so use it carefully.


## Organizing the Functions mess
[More examples](https://www.tutorialspoint.com/cprogramming/c_functions.htm)

Up to now we had a rule, all the functions needed to be declared before the main method so that when we invoke it from our main body, it would be visible by its invocation.

BUUUT,does it need to be like that? 

Nope, we have two different things in our function, one is the function declaration the other one is the function body (okay we knew it), but the good news are, we can decouple it!


**What is the function declaration?**
The function declaration is that first line we put in our function, it looks somehow like the following:

		return_type function_name( parameter list );



**What is the function body?**
The function body is basically everything else that includes the list of instructions that will be executed, so our function with its body would look like:

		return_type function_name( parameter list ){
			do this
			do that
			return myReturn_type;
		}	

The best out of it?
If we declare the function on our header, before everything else, we can implement our function in any place in our file.

like:

		#include<this>
		#include<that>

		// my function declaration (notice the ";" in the end)
		return_type function_name( parameter list );		
		
		// my main method
		int main(){
			// Using the function here
			function_name(potato,cucumber);
			return 0;
		}

		// and implementing it only here at the eeeend!
		return_type function_name( parameter list ){
			do this
			do that
			return myReturn_type;
		}	


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

![](https://media.giphy.com/media/kd9BlRovbPOykLBMqX/giphy.gif)


**This is what we will be talking about**

Pointers are nothing but addresses of memory, so when you call a function using the reference instead of making a clone of the variables. 

Let's see the oranges example implemented (check orange_counter.c file)

### Try by your own

Implement a function with void return that takes 3 arguments (all ints), num1, num2 and \*sum, where sum is a pointer. The function changes the value of sum to correspont to num1+num2;