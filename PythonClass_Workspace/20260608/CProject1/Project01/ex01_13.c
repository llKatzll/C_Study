#include <stdio.h>

int main() {

	char _blood;

	printf("혈액형을 입력하세요.\n(키보드 입력, AB형 제외)\n");
	scanf_s("%c", &_blood,1);
	printf("당신의 혈액형은 %c 입니다.\nblood_type : %d\n", _blood, _blood);

	return 0;
}