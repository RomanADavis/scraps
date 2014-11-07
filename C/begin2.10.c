//Program 2.10 - Round tables again, but shorter
#include <stdio.h>

int main(void)
{
	float 		diameter 	= 0.0f;
	float 		radius 		= 0.0f;
	const float PI 			= 3.14159f;
	
	printf("Input the diameter of a table:");
	scanf("%f", &diameter);
	
	radius = diameter/2.0f;
	
	printf("\nThe area is %f.", PI * radius * radius);
	printf("\nThe circumference is %f.\n", diameter * PI);
	return 0;
}
