//Program 2.5 Calculating with Cookies
#include <stdio.h>

int main(void)
{
	int cookies = 5;
	int calories = 125;
	int total_eaten = 0;
	
	int eaten = 2;
	cookies = cookies - eaten;
	total_eaten = total_eaten + eaten;
	printf("I have eaten %d cookies, there are %d cookies left.\n",
															eaten, cookies);
	
	eaten = 3;
	cookies = cookies - eaten;
	total_eaten = total_eaten + eaten;
	printf("I have eaten %d more. Now there are %d cookies left.\n", 
															eaten, cookies);
	printf("Total energy consumed is %d calories.\n", total_eaten * calories);
	return 0;
}
