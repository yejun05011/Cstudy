#include <stdio.h>

int main(void) {
	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);	// 배열명 앞에 &를 사용하지 않는다.
	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;
}