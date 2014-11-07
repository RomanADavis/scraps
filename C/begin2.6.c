//Program 2.6 - Cookies and kids
#include <stdio.h>

int main(void)
{
	int cookies = 45;
	int kids = 7;
	int cookies_per_child = 0;
	int cookies_left_over = 0;
	
// Calculate how many cookies each child gets when they are split up
	cookies_per_child = cookies/kids;
	printf("You have %d children and %d cookies.\n", kids, cookies);
	printf("Give %d to each child.\n", cookies_per_child);
	
// Calculate how many cookies are left over.
	cookies_left_over = cookies % kids;

	return 0;
}
