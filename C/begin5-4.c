// Program 5.4 Reusing the numbers stored
#include <stdio.h>

int main(void)
{
	unsigned int count = 10;				// Number of values to be read
	int grades[count];						// Array to store "count" values
	long sum = 0L;							// Sum of numbers
	float average = 0.0f;					// Average of the numbers
	unsigned int i;
	
	printf("\nEnter the 10 grades:\n");		// Prompt for the input
	
	// Read the ten numbers to be averaged
	for(i = 0; i < count ; ++i)
	{
		printf("%2u ", i + 1);
		scanf("%d", &grades[i]);			// Read a grade
		sum += grades[i];					// Add it to sum
	}
	average = (float)sum/count;				// Calculate the average
	
	// List the grades
	for(i = 0 ; i < count ; ++i)
		printf("\nGrade Number %2u is %3d", i + 1 , grades[i]);
		
	printf("\nAverage of the ten grades entered is: %.2f\n", average);
	return 0;
}
