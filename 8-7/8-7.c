#include <stdio.h>

int main(void) {
	char str[5];

	str[0] = 'O';
	str[1] = 'K';
	// str[2] = '\0';	// 널 문자가 없다면 ?
	printf("%s\n", str);

	return 0;
}