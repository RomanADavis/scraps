// Program 4.9 Output a box with a given width and height
#include <stdio.h>

int main(void)
{
	const unsigned int MIN_SIZE = 3;				// Minimum width and height values
	unsigned int width = 0;
	unsigned int height = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	
	// Read in required width and height
	printf("Enter values for the width and height (minnimum of %u):", MIN_SIZE);
	scanf("%u%u", &width, &height);
	
	// Validate width and height values
	if(width < MIN_SIZE)
	{
		printf("\nWidth value of %u is to small. Setting it to %u.", width, MIN_SIZE);
		width = MIN_SIZE;
	}
	if(height < MIN_SIZE)
	{
		printf("\nHeight value of %u is too small. Setting it to %u.\n", height, MIN_SIZE);
		height = MIN_SIZE;
	}
	// Output the top of the box with width asterisks
	for(i = 0 ; i < width ; ++i)
		printf("*");							// First asterisk
		
	// Output height - 2 rows of width characters with * at each end and space inside
	for(j = 0 ; j < height - 2 ; ++j)
	{
		printf("\n*");							// First asterisk
		
		// Next draw the spaces
		for(i = 0 ; i < width - 2 ; ++i)
			printf(" ");
		
		printf("*");							// Last asterisk
		
	}
	//Output the bottom of the box
	printf("\n");								// Start on a newline
	for(i = 0 ; i < width ; ++i)
		printf("*");
		
	printf("\n");								// Newline at end of last line
	return 0;
}
