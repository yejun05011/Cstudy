#include <stdio.h>

void assign(void);

int main(void) {
	auto int a = 0;	// 지역 변수 선언과 초기화, auto는 생략 가능

	assign();
	printf("main 함수 a : %d\n", a);

	return 0;
}

void assign(void) {
	int a = 10;
	printf("assign 함수 a : %d\n", a);
}