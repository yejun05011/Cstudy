#include <stdio.h>

int main(void) {
	int age;
	double height;

	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	printf("키를 입력하세요 : ");
	scanf("%lf", &height);

	printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);

	return 0;
}