// Exercise 3-3 from Begining C
// Program calculates the price of an order for some of a $5 dollar good, giving
// a 10% discount for orders of >= 30 and a 15% discount for orders of >= 50.
// Roman Davis
#include <stdio.h>

int main(void)
{
	float product = 5.00f;				// Price of the product
	long order = 0;						// Initializes # ordered
	float discount30 = .10f;
	float discount50 = .15f;
	float total = 0.00f;
	
	printf("Our product is $5. How many would you like to buy?");
	scanf(" %ld", &order);
	
	total = product * order;
	if(order >= 30 && order < 50)
	{	
		total = total * (1.0 - discount30);
		printf("\nFor that many, there's a %.0f percent discount.", 
															discount30 * 100);
	}
	if(order >= 50)
	{
		total = total * (1.0 - discount50);
		printf("\nFor that many, there's a %.0f percent dicscount.", 
															discount50 * 100);
	}
				
	printf("\nYour total is %.2f. Have a nice day.\n", total);
	return 0;
}
