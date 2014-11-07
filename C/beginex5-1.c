// Excercise 5-1 from Beginning C
// Makes an array of five doubles off of user input.
// Then calculates and stores their reciprocals in a seperate array.
// Adds up the values of that array. Displays the array and the sum.
#include <stdio.h>

int main(void)
{
	unsigned int size = 5;
	float five[size];
	double reciprocals[5];
	float sum_of_recs = 0;
	unsigned int i;
	
	printf("This program needs 5 numbers.");
	
	for(i = 0; i < size ; i++)
	{
		printf("Give me a number. %d left.\n", size - i - 1);
		scanf("%f", &five[i]);
		reciprocals[i] = 1.0 / five[i];
		sum_of_recs += reciprocals[i];
		printf("\nThe reciprocal of %f is %f.\n", five[i], reciprocals[i]);
	}
	
	printf("The sum of the reciprocals is %f.\n", sum_of_recs);

	return 0;
}
