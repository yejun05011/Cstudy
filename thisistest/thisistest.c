#include <stdio.h>

int main(void) {
	int a = 10;
	int* pi = &a;
	int** ppi = &pi;

	printf("%d\n", *pi);
	printf("%d\n", *ppi);
	printf("%d\n", **ppi);
}