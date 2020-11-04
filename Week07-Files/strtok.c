// Example from: https://www.geeksforgeeks.org/strtok-strtok_r-functions-c-examples/
// A C/C++ program for splitting a string 
// using strtok() 
#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str[] = "Geeks-for-Geeks"; 
  
    // Returns first token 
    char* token = strtok(str, "-"); 
  
    // Keep printing tokens while one of the 
    // delimiters present in str[]. 
    while (token != NULL) { 
        printf("%s\n", token); 
        token = strtok(NULL, "-"); 
    } 
  
    return 0; 
} 