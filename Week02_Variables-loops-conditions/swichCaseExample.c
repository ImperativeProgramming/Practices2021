#include <stdio.h>

int main()
{
	int dayOfTheWeek = 0;
	
	printf("Gimme the day of the week (number) \n");
	scanf("%d", &dayOfTheWeek);
	
	switch(dayOfTheWeek)
	{
		default: 
		  printf("Undefined"); 
		  break;
		case  2: 
		  printf("Monday");    
		  break;
		case  3: 
		  printf("Tuesday");   
		  break;
	    case  4: 
		  printf("Wednesday"); 
		  break;
		case  5: 
		  printf("Thursday");  
		  break;
		case  6: 
		  printf("Friday");    
		  break;
		case  1: 			
		  case  7:
		    printf("Weekend");  
		    break;
		
		
		
	}
	
	
	
}