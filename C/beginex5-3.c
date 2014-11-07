// Exercise 5-3 from Beginning C
#include <stdio.h>

int main(void)
{
	float amounts[5];
	int dollars[5];
	int cents[5];
	
	printf("Let me store five amounts of money.");
	unsigned int i;
	for(i = 0; i < 5 ; ++i)
	{
		printf("\n%d>", i + 1);
		scanf("%f", &amounts[i]);
		dollars[i] = (int)amounts[i];
		cents[i] = (((int)(amounts[i] * 100)) % 100);
		printf("\nThat's S%d.%d", dollars[i], cents[i]);
	}
	return 0;
}
