#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[80] = "pear";
	char str2[80] = "peach";

	/*if (strcmp(str1, str2) == 1) {
		printf("������ ���߿� ������ ���� �̸� : %s", str1);
	}

	else {
		printf("������ ���߿� ������ ���� �̸� : %s", str2);
	}*/

	printf("�տ��� 3���� ���ڸ� ���ϸ�?\n");

	if (strncmp(str1, str2, 3) == 0) {
		printf("����.\n");
	}

	else {
		printf("�ٸ���.\n");
	}

	return 0;
}