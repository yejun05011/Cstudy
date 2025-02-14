#include <stdio.h>

int sum(int x, int y);	// sum 함수 선언

int main(void) {	// main 함수 시작
	int a = 10;
	int b = 20;
	int result;	// 두 정수를 더한 결과를 저장할 변수

	result = sum(a, b);	// sum 함수 호출
	printf("result : %d\n", result);

	return 0;
}

int sum(int x, int y) {	// sum 함수 정의
	int temp;	// 두 정수의 합을 잠시 저장할 변수

	temp = x + y;	// x와 y의 합을 temp에 보관

	return temp;	// temp의 값을 반환
}