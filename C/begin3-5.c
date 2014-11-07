// Program 3-5 Testing letters an easier way
#include <stdio.h>
int main(void)
{
	char letter = 0;						// Stores an input character
	
	printf("Enter an uppercase letter:");	// Prompt for input
	scanf(" %c", &letter);					// Read the input character
	
	if((letter >= 'A') && (letter <= 'Z'))	// Verify an uppercase letter
	{
		letter += 'a' - 'A';				// Convert to lowercase letter
		printf("You enter an uppercase %c.\n", letter);
	}
	else
		printf("You did not enter an uppercase letter.\n");
	return 0;
}
