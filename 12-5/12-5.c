#include <stdio.h>
#include <string.h>

int main(void) {
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);	// 문자열 입력

	str[strlen(str) - 1] = '\0';
	printf("입력된 문자열 : %s입니다.", str);

	return 0;
}