// Program 4.7A A more interesting guessing game
#include <stdio.h>
#include <stdlib.h>							// For rand() and srand()
#include <time.h>							// For time() function

int main(void)
{
	int chosen = 0;							// The lucky number
	int guess = 0;							// Stores a guess
	int count = 3;							// The maximum number of tries
	int limit = 20;							// Upper limit for psuedo random values
	
	srand(time(NULL));						// Uses clock value as starting seed
	chosen = 1 + rand() % limit;			// Rand int 1 to limit
	
	printf("\nThis is a guessing game.");
	printf("\nI have chosen a number between 1 and 20"
										" which you must guess.\n");
	
	for( ; count > 0 ; --count)
	{
		printf("\nYou have %d tr%s left.", count, count == 1 ? "y" : "ies");
		printf("\nEnter a guess: ");		// Prompt for a guess
		scanf("%d", &guess);				// Read in a guess
		
		// Check for correct guess
		if(guess == chosen)
		{
			printf("\nCongratulations. You guessed it!\n");
			return 0;						// End the program
		}
		else if(guess < 1 || guess > 20) 	// Check for an invalid guess
			printf("I said the number is between 1 and 20\n.");
		else
			printf("Sorry, %d is wrong. My number is %s than that,\n",
									guess, chosen > guess ? "greater" : "less");
	}
	printf("\nYou have had three tries and failed. The number %d\n",
																chosen);
	return 0;
}
