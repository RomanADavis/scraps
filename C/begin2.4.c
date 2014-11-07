//Program 2.4 -Simple Calculator
#include <stdio.h>
int main(void)
{
	int total_pets;
	int cats;
	int dogs;
	int ponies;
	int others;
	//set numbers of each pet
	cats = 2;
	dogs = 1;
	ponies = 1;
	others = 46;
	total_pets = cats + dogs + ponies + others;
	
	printf("We have %d total pets.\n", total_pets);
	return 0;
}
