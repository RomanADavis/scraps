// Program 4.2 Drawing a box
#include <stdio.h>

int main(void)
{
	int count;
	printf("\n* * * * * * * * *");			// Draw the top of the box
	
	for(count = 1; count <= 8 ;	++count)
		printf("\n*               *");		// Draw the sides of the box
		
	printf("\n* * * * * * * * *\n");			// Draw the bottom of the box
	return 0;
}
