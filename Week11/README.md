#Assignment 5

The task is the implementation of a simple string encoding.
Let's define the following structs for the implementation:

* Members of `Pair`:
	- `c`: encoded character
	- `n`: number of consecutive occurrences of `c`

* Members of `Encoded`:
	- `length`: positive integer which indicates how many elements the encoded result contains
	- `arr`: a dynamic array of `length` elements that contains pointers to `Pair` objects

This task can be solved without using dynamic memory handling in which case maximum 2 points can be gathered.
In this kind of implementation the `arr` member of `Encode` struct should be a static array of 255 elements.

## Encoding

Character encoding is done by `encode` function which is given a string as parameter and returns a pointer to an `Encoded` object.
(If static array is used then the function returns the struct itself, instead of a pointer.)
Character encoding is done like this:

```txt
aaabbccc -> (a, 3) (b, 2) (c, 3)
```

In this case the value of `length` is 3.

## Decoding

String decoding is done by `decode` function. This gets an `Encoded` object as parameter and returns a string which contains the original text.
(If no dynamic memory handling is used, then `decode` also gets a `char*` as parameter and decoded text is written there.)

## Program requirements

* The program should read a text containing only lowercase letters from the user. If this requirement is not met then the program should print "Bad input!" to the standard output and stop running. In case of correct input the program should print the text encoded by `encode` function and the text decoded by `decode` function. For example:

```txt
input: aaabbccc
output: 3a2b3c -> aaabbccc
```

* The program should print nothing but the encoded text or the error message.
* The program should be separated to multiple translation units:

	- `main.c`, contains only `main` function.
	- `rle.h` header, contains struct definitions and the declarations of `encode` and `decode` functions. The header file should contain a header guard!
	- `rle.c` contains the defition of `encode` and `decode` functions.
