#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[80];
	char str2[80];
	char* resp = NULL;

	printf("2���� ���� �̸� �Է� : ");
	scanf("%s%s", str1, str2);

	if (strlen(str1) > strlen(str2)) {
		resp = str1;
		printf("�̸��� �� ������ %s �Դϴ�.\n", resp);
	}

	else if (strlen(str1) == strlen(str2)) {
		printf("�� ������ �̸��� ���̴� �����ϴ�.");
	}

	else {
		resp = str2;
		printf("�̸��� �� ������ %s �Դϴ�.\n", resp);
		
	}

	return 0;
}