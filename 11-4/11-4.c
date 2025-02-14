#include <stdio.h>

int main(void) {
	char ch;
	
	for (int i = 0; i < 3; i++) {
		scanf("%c", &ch);	// 문자 입력
		printf("%c", ch);	// 입력된 문자 출력
	}

	return 0;
}