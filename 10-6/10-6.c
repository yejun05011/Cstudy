#include <stdio.h>

void print_ary(int* pa, int size);

int main(void) {
	int ary1[5] = { 10, 20, 30, 40, 50 };	// 배열 요소의 개수가 5개
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };	// 배열 요소의 개수가 7개

	print_ary(ary1, 5);
	printf("\n");
	print_ary(ary2, sizeof(ary2) / sizeof(ary2[0]));

	return 0;
}

void print_ary(int* pa, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", pa[i]);
	}
}