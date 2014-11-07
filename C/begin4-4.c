// Program 4.4 Summing Integers - compact version
#include <stdio.h>

int main(void)
{
	unsigned long long sum = 0LL;		// Stores sum for integers
	unsigned int count = 0;				// Number of ints to be summed
	unsigned int i;
	
	// Read the number of integers to be summed
	printf("\nEnter the number of integers you want to sum: ");
	scanf(" %u", &count);
	
	// Sum integers from i to count
	for(i = 1; i <= count ; sum += i++);
	
	printf("\nTotal of the first %u numbers is %llu\n", count, sum);
	return 0;
}
