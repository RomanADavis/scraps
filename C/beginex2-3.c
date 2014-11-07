//Excercise 2-3 from chapter 2 of Begining C
//Takes input of two quality products and their quanity and outputs the total
//price.
//Roman Davis
#include <stdio.h>

int main(void)
{
	float standard_price = 3.50f;
	float deluxe_price = 5.50f;
	float standard_quantity = 0.0f;
	float deluxe_quantity = 0.0f;
	float total = 0.0f;
	
	printf("The standard product costs $%.2f. How many do you want?",
																standard_price);
	scanf("%f", &standard_quantity);
	
	printf("The deluxe product costs $%.2f. How many do you want?",
																deluxe_price);
	scanf("%f", &deluxe_quantity);

	total = (standard_price*standard_quantity)+(deluxe_price*deluxe_quantity);
	
	printf("Your total comes to $%.2f. Have a nice day.\n", total);
	return 0;
}
