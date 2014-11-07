//Excercise 2-4 From Chapter 2 of Begining C
//Take an input of a weekly wage. Then outputs an hourly wage as two ints, one
//for dollars and one for cents.
//Cents doesn't work. Should try and fix later.
#include <stdio.h>

int main(void)
{
	float weekly_pay = 0.0f;
	int dollars_per_hour = 0;
	int cents_per_hour = 0;
	int cents_per_dollar = 100.0f;
	float hours_per_week = 40.0f;
	
	printf("How much money do you make a week?");
	scanf("%f", &weekly_pay);
	
	dollars_per_hour = (weekly_pay / hours_per_week);
	cents_per_hour = ((cents_per_dollar * dollars_per_hour)) % cents_per_dollar;
	
	printf("Your average hourly pay is %d dollars and %d cents.\n", 
										(int)dollars_per_hour, cents_per_hour);
	return 0;
}

