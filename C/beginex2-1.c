//Exercise 2-1 From Begining C 
//Prompts user for inches and print out distance in yards feet and inches
//Roman Davis
#include <stdio.h>

int main(void)
{
	long inches = 0.0L;
	long feet = 0.0L;
	long yards = 0.0L;
	
	long inches_per_foot = 12.0L;
	long inches_per_yard = 36.0L;
	
	printf("How many inches distance?"); //Weird wording. Need to work on that.
	scanf("%ld", &inches);
	
	feet = inches / inches_per_foot;
	yards = inches / inches_per_yard;
	
	printf("%ld inches is %ld yards or %ld feet.\n", inches, yards, feet);
	//^ Hope this is what they want. I could do a compound unit using mod, but
	//I only prompt for single units, so I assume we output single units.
	return 0;
}
