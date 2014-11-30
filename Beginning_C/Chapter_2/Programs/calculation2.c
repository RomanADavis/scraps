// Program 2.5 Calculations with cookies
#include <stdio.h>

int main(void){
	int cookies = 5;
	int calories_per_cookie = 125;
	int cookies_eaten = 0;
	int eating_cookies = 2;
	
	cookies -= eating_cookies;
	cookies_eaten += eating_cookies;
	
	printf("\nI have eaten %d cookies, there are %d cookies left.", cookies_eaten, cookies);
	eating_cookies = 3;
	cookies -= eating_cookies;
	cookies_eaten += eating_cookies;
	
	printf("\nI have eaten %d more cookies. There %d cookies left.\n", eating_cookies, cookies);
	printf("\nTotal energy consumed is %d calories.\n", cookies_eaten * calories_per_cookie);
	
	return 0;
}
