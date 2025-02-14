#include <stdio.h>

void swap(int* pa, int* pb);	// 두 변수의 값을 바꾸는 함수의 선언

int main(void) {
	int a = 10;
	int b = 20;

	swap(&a, &b);	// a, b의 주소를 인수로 주고 함수 호출
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb) { // 매개변수로 포인터 선언
	int temp;	// 교환을 위한 임시 변수

	temp = *pa;	// temp = 10
	*pa = *pb;	// a = 20
	*pb = temp;	// b = 10
}