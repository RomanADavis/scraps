// Exercise 3-2 from Begining C
// Prompts a user for the data by entering 3 numbers. Prints it out nicely.
// Roman Davis
#include <stdio.h>

int main(void)
{
	int day = 0;
	int month = 0;
	long year = 0;
	
	printf("\nWhat's the number for the day of the month?");
	scanf(" %d", &day);
	printf("\nWhat's the number for the month?");
	scanf(" %d", &month);
	printf("\nWhat's the year?");
	scanf(" %ld", &year);
	
	printf("\n%d", day);
	
	switch(day)
	{
		case 1: case 21:
			printf("st ");
			break;
		case 2: case 22:
			printf("nd ");
			break;
		case 3: case 23:
			printf("rd ");
			break;
		default:
			printf("th ");
			break;
	}
	
	switch(month)
	{
		case 1:
			printf("January");
			break;
		case 2:
			printf("February");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("July");
			break;
		case 8:
			printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("October");
			break;
		case 11:
			printf("November");
			break;
		default:
			printf("December");
			break;
	}
	printf(" %ld\n", year);
	return 0;
}
		
