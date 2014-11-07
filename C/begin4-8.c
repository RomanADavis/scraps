// Program 4.8 While programming and summing integers
#include <stdio.h>

int main(void)
{
	unsigned long sum = 0UL;		// The sum of the integers
	unsigned int i = 0;				// Indexes through integers
	unsigned int count = 0;			// The count of integers to be summed
	
	// Get te count of numbers to integers to sum
	printf("\nEnter the number of integers you want to sum: ");
	scanf(" %u", &count);
	
	// Sum the integers from 1 to count
	while(i < count)
		sum += ++i;
		
	printf("Total of the first %u numbers in %lu\n", count, sum);
	return 0;
}
