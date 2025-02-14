#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);

int main(void) {
	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);

	return 0;
}

void swap_ptr(char** ppa, char** ppb) {
	char* pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}
// char** ppa = &pa;
// char** ppb = %pb;