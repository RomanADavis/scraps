// Program 2.9 More circles
#include <stdio.h>
#define PI 3.14159f

int main(void){
	float radius = 0.0f;
	float diameter = 0.0f;
	float circumference = 0.0f;
	float area = 0.0f;
	
	printf("Input the diameter: ");
	scanf("%f", &diameter);
	
	radius = diameter / 2.0f;
	circumference = PI * diameter;
	area = PI * radius * radius;
	
	printf("\nThe area is %.2f.", area);
	printf("\nThe circumference is %.2f.", circumference);
	
	return 0;
}
