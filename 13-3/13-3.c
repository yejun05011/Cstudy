#include <stdio.h>

void assign10(void);
void assign20(void);

int a;

int main(void) {
	printf("함수 호출 전 a 값 : %d\n", a);	// 전역 변수 a 출력

	assign10();
	assign20();

	printf("함수 호출 후 a 값 : %d\n", a);

	return 0;
}

void assign10() {
	a = 10;
}

void assign20(void) {
	int a;

	a = 20;
}