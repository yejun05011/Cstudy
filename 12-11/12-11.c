#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[80];
	char str2[80];
	char* resp = NULL;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);

	if (strlen(str1) > strlen(str2)) {
		resp = str1;
		printf("이름이 긴 과일은 %s 입니다.\n", resp);
	}

	else if (strlen(str1) == strlen(str2)) {
		printf("두 과일의 이름의 길이는 같습니다.");
	}

	else {
		resp = str2;
		printf("이름이 긴 과일은 %s 입니다.\n", resp);
		
	}

	return 0;
}