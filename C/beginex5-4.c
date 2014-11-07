// Exercise 5-4 from Beginning C
#include <stdio.h>
#include <math.h>
int main(void)
{
	double grid[11][5];
	unsigned int i;
	unsigned int j;
	double exponent = 0;
	double pow(double x, double y);
	
	for(i = 0 ; i < 11 ; ++i)
	{
		grid[i][0] = 2 + (.1 * i);
		for(j = 1; j < 5; ++j)
		{
			exponent = pow(grid[i][0], j);
			grid[i][j] = 1/ exponent;
		}
		printf("%lf\n", grid[i][0]);
	}
	return 0;
}
