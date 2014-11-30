// Program 2.6 Cookies and kids
#include <stdio.h>

int main(void){
	int cookies = 45;
	int children = 7;
	int cookies_per_child = cookies / children;
	int cookies_left_over = cookies % children;
	
	printf("You have %d children and %d cookies.\n", children, cookies);
	printf("Give each child %d cookies.\n", cookies_per_child);
	printf("There are %d cookies left over.", cookies_left_over);
	
	return 0;
}
