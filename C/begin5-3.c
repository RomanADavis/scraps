// Program 5.3 Average ten grdes - storing the value the easy way
#include <stdio.h>

int main(void)
{
	int grades[20];							// Arrayy stores ten values
	unsigned int count = 10;				// Number of values to be read
	long sum = 0L;							// Sum of the numbers
	float average = 0.0f;					// Average of the numbers
	unsigned int i;
	
	printf("\nEnter the 10 grades: \n");	// Prompt for the input
	
	// Read the ten numbers to be averaged
	for(i = 0; i < count ; ++i)
	{
		printf("%2u> ",i +1);
		scanf("%d", &grades[i]);			// Read a grade
		sum += grades[i];					// Add it to sum
	}
	average = (float)sum/count;				// Calculate the average
	printf("\nAverage of the ten grades entered is: %.2f\n", average);
	return 0;
}
