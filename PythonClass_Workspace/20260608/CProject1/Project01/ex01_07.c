#include <stdio.h>

int main() {

	// 숫자를 입력하세요:100
	// 입력 받은 정수값은 100입니다
	int num;
	printf("숫자를 입력하세요. : ");
	scanf_s("%d", &num); // 키보드로부터 직접 입력 받기, 입력을 받을 때는 줄바꿈 문자가 들어가선 안된다!

	printf("입력 받은 정수값은 %d입니다", num);

	return 0;
}