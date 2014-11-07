//Excercise 2-2 from chapter of Begining C
//Prompts for length and width in feet and inches, outputs square yards within 2
//decimal places
//Roman Davis
#include <stdio.h>

int main(void)
{
	float width = 0.0f;
	float length = 0.0f;
	float inches = 0.0f;
	float feet = 0.0f;
	float room = 0.0f;
	float inches_per_foot = 12.0f;
	float inches_per_yard = 36.0f;
	
	printf("What's the width of the room(whole feet)?");
	scanf("%f", &feet);
	printf("             ...and the remaining inches?");
	scanf("%f", &inches);
	
	width = (feet * inches_per_foot) + inches;
	
	printf("What's the length of the room(whole feet)?");
	scanf("%f", &feet);
	printf("              ...and the remaining inches?");
	scanf("%f", &inches);
	
	length = (feet * inches_per_foot) + inches;
	room = (length / inches_per_yard) * (width / inches_per_yard);
	
	printf("The room is %.2f square yards.\n", room);
	return 0;
}
