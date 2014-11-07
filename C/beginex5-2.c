// Exercise 5-2 from Beginning C

#include <stdio.h>

int main(void)
{
	double data[100];
	double sum = 0;
	unsigned int i = 0;
	unsigned int x = 0;
	double flipper = 1.0;
	
	for(i = 0; i < sizeof(data)/ sizeof(double); ++i)
	{
		x = 2 * (1+i);
		data[i] = 1.0/(x*(x+1)*(x+2));
//		printf("1/%d * %d * %d", x, x + 1, x + 2);
		sum += data[i] * flipper;
		flipper = -flipper;
	}

	printf("The alternating sum you wanted is %lf\n", sum);
	
	printf("Mutiply by 4, add 3, and you get %lf.\n", (sum * 4) + 3);
	
	return 0;
}
