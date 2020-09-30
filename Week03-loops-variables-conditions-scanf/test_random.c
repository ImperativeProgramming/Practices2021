
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	 time_t t;
	 srand((unsigned) time((&t)));
	 int n = rand() % 5;

	 printf("my number: %d\n", rand());

	 // if(n==1){
	 // 	printf("whatever\n");
	 // }else
	 // if(n==2){
	 // 	printf("whatever for 2\n");
	 // }else
	 // if(n==3){
	 // 	printf("whatever for 3\n");
	 // }else{
	 // 	printf("owww boy\n");
	 // }

	 

	 switch(n){
	 	default:printf("default\n"); break;
	 	case 1: printf("potato\n"); break;
	 	case 2: printf("banana\n"); break;
	 	case 3: printf("cucumber\n");break;
	 }
}