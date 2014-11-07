// Program 4.12 Reversing the digits
#include <stdio.h>
int main(void)
{
	unsigned int number = 0;					// The number to be reversed 
	unsigned int reversed = 0;					// The reversed number
	unsigned int temp = 0;						// Working storage
	
	// Read in the value to be reversed 
	printf("\nEnter a positive integer: ");
	scanf(" %u", &number);
	
	temp = number;								// Copy to working storage
	
	// Reverse the number stored in temp
	do
	{
		reversed = 10*reversed + temp % 10;		// Right digit of temp to reversed
		temp = temp/10;							// and remove it from temp
	}while(temp);								// Continue while temp is positive
	printf("\nThe number %u reversed is %u.\n", number, reversed);
	return 0;
}
