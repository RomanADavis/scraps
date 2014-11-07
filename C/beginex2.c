//Calculate the height of a tree
#include <stdio.h>

int main(void)
{
	long shorty_to_lofty = 0L;
	long lofty_to_tree = 0L;
	long lofty = 0L;
	long shorty = 0L;
	long shorty_to_tree = shorty_to_lofty + lofty_to_tree;
	
	long tree=shorty+(shorty_to_tree)*(lofty-shorty)/shorty_to_lofty;
	
	printf("Use centimeters or you're screwed!");
	printf("\nHow tall is lofty?\n");
	scanf("%ld", &lofty);
	
	printf("\nHow tall is shorty?\n");
	scanf("%ld", &shorty);
	
	printf("\nHow far from shorty is lofty?");
	scanf("%ld", &shorty_to_lofty);
	
	printf("\nHow far from lofty is the tree?\n");
	scanf("%ld", &lofty_to_tree);
	
	printf("The tree is %ld centimeters tall\n", tree);
	return 0;	
}
