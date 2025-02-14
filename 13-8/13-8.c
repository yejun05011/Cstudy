#include <stdio.h>

int* sum(int a, int b);

int main(void) {
	int* resp;

	resp = sum(10, 20);	// *resp = res의 주소;
	printf("두 정수의 합 : %d\n", *resp);

	return 0;
}

int* sum(int a, int b) {	//int a = 10, int b = 20;
	static int res;

	res = a + b;	// res = 30;

	return &res;	//res = 30의 "주소"를 return;
}