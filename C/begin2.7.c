//Program 2.7 - Dividing with float values
#include <stdio.h>
int main(void)
{
	float plank_length =  10.0f;
	float pieces = 4.0f;
	float piece_length = 0.0f;
	
	piece_length = plank_length / pieces;
	
	printf("A %.2f foot plank can be cut into %.0f pieces, %.2f length long.\n",
											plank_length, pieces, piece_length);
	return 0;
}
