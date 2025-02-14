#include <stdio.h>

int main(void) {
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);	// apple juice 출력하고 줄 바꿈
	fputs(ps, stdout);	// banana만 출력
	puts("milk");	// banana에 이어 milk 출력

	return 0;
}