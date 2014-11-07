#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double superpowers = 56789.4532;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";

	printf("You are %d miles away.\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome super powers.\n", superpowers);
	printf("Your middle initial is %c.", initial);
	printf("Your first name is %s.\n", first_name);
	printf("Your last name is %s.\n", last_name);
	printf("Your full name is %s %c. %s.\n",
		first_name, initial, last_name);
	printf("");

	return 0;
}
