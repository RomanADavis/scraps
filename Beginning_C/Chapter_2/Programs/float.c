// Program 2.7 Division with float values
#include <stdio.h>

int main(void){
	float plank_length = 10.0f;
	float piece_count = 4.0f;
	float piece_length = plank_length / piece_count;
	
	printf("A plank %.0f feet long can be cut into %.0f equal pieces that %.1f feet long.", plank_length, piece_count, piece_length);
	
	return 0;
}
