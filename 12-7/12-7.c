#include <stdio.h>

int main(void) {
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);	// apple juice ����ϰ� �� �ٲ�
	fputs(ps, stdout);	// banana�� ���
	puts("milk");	// banana�� �̾� milk ���

	return 0;
}