//Program 2.17 Calculating the heignt of a tree
#include <stdio.h>

int main(void)
{
	long shorty = 0L;					//Shorty's height in inches
	long lofty = 0L;					//Lofty's height in inches
	long feet = 0L;
	long inches = 0l;
	long shorty_to_lofty = 0L;			//Distance from Shorty to Lofty in inches
	long lofty_to_tree = 0L;			//Distance from Lofty to the tree inches
	const long inches_per_foot = 12L;
	
	//Get Lofty's height
	printf("Enter lofty's height to the top of his/her head, in whole feet: ");
	scanf("%ld", &feet);
	printf("        ...and then in inches: ");
	scanf("%ld", &inches);
	lofty = feet * inches_per_foot + inches;
	
	//Get Shorty's height up to his eyes
	printf("Enter Shorty's height up to his eyes, in whole feet: ");
	scanf("%ld", &feet);
	printf("        ...and then in inches: ");
	scanf("%ld", &inches);
	shorty = feet * inches_per_foot + inches;
	
	//Get distace from Shorty to Lofty
	printf("Enter the distance between Shorty and Lofty, in whole feet: ");
	scanf("%ld", &feet);
	printf("                                       ...and then in iches:");
	scanf("%ld", &inches);
	shorty_to_lofty = feet * inches_per_foot + inches;
	
	//Get the distance from Lofty to the tree
	printf("Enter the distance from Lofty to the tree to the nearest foot: ");
	scanf("%ld", &feet);
	lofty_to_tree = feet * inches_per_foot;
	
	//The code to calculate the height of the tree will go here
	long shorty_to_tree = shorty_to_lofty + lofty_to_tree;
	long tree = shorty + shorty_to_tree * (lofty - shorty) / shorty_to_lofty;
	feet = tree / inches_per_foot; 
	inches = feet % inches;
	
	//The code to display the result will go here
	printf("The tree is %ld feet % ld inches tall.\n", feet, inches);
	
	return 0;
}
