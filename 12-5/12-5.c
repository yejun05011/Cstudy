#include <stdio.h>
#include <string.h>

int main(void) {
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);	// ���ڿ� �Է�

	str[strlen(str) - 1] = '\0';
	printf("�Էµ� ���ڿ� : %s�Դϴ�.", str);

	return 0;
}