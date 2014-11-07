// Excercise 3-1 From Begining C - Temperature Conversion
// Prompts user for temperature and system of measurement (Fahrenheit or
// Celsius), then converts it to the other form.
// Roman Davis
#include <stdio.h>
#include <ctype.h>					// For toupper()

int main(void)
{
	float degrees = 0.0f;
	char system = 'a';
	
	printf("How many degrees is it? ");
	scanf(" %f", &degrees);
	printf("Under what system? Type C for Celsius or F for Fahrenheit. ");
	scanf(" %c", &system);
	
	switch(toupper(system))
	{
		case 'F':
			printf("\n\nThat's %.2f in Celsius.\n", (degrees - 32) * 5 / 9);
			break;
		case 'C':
			printf("\n\nThat's %.2f in Farenheit.\n", (degrees * 1.8) + 32);
			break;
		default:
			printf("\n\nI've never heard of that system before.\n");	
	}
	return 0;
}
