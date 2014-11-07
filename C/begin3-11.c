// Program 3.11 A calcultor
// + considerable changes to make it loop with goto for exercise 3-4.
// Roman Davis
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	double number1 = 0.0;		// First operand value a decimal number
	double number2 = 0.0;		// Second operand value a decimal number
	char operation = 0;			// Operation - must be +, -, *, /, or %
	char answer = 0;
	
	prompt: printf("\nEnter the calculation\n");
	scanf("%lf %c %lf", &number1, &operation, &number2);

	switch(operation)
	{
		case '+':				// No checks necessary for add
			printf("= %lf\n", number1 + number2);
			break;
		case '-':				// No checks necessary for subtract
			printf("= %lf\n", number1 - number2);
			break;
		case '*':				// No checks necessary for multiply
			printf("= %lf\n", number1 * number2);
			break;
		case '/':				
			if(number2 == 0)	// Check second operand for zero
				printf("\n\nYou can't divide by zero.\n");
			else
				printf("= %lf\n", number1 / number2);
			break;
		case '%':
			if((long)number2 == 0)
				printf("\n\nYour mod divides by zero. You can't do that.\n");
			else
				printf("= %ld\n", (long)number1 % (long)number2);
		default:				// Operation is invalid.
			printf("\n\nIllegal operation!\n");
			break;
	}
		
	/* Plus the rest of the code for the program */
	cycle: printf("\nWant to do another calculation? Y/n");
	scanf(" %c", &answer);
	
	switch(toupper(answer))
	{
		case 'Y':
			goto prompt;
			break;
		case 'N':
			printf("\nHave a nice day.\n");
			break;
		default:
			printf("\nInvalid\n");
			goto cycle;
	}
	return 0;
}
