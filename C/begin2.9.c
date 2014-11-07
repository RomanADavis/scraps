//Program 2.9 - More round tables
#include <stdio.h>
#define PI 3.14159f				//Define PI

int main(void)
{
	float radius 		= 0.0f;
	float diameter 		= 0.0f;
	float circumference = 0.0f;
	float area 			= 0.0f;
	
	printf("Input the diameter of a table:");
	scanf("%f", &diameter);
	
	radius = diameter / 2.0f;
	circumference = diameter * PI;
	area = radius * radius * PI;
	
	printf("\n\nThe circumference is %.2f.", circumference);
	printf("\nThe area is %.2f.", area);
	return 0;
}
