#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 20;
	int res = 2;

	a += 20; // a = 30
	res *= b + 10;	// res = 60

	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);

	return 0;
}