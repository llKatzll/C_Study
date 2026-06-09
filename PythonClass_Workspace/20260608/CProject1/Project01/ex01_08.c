#include <stdio.h>

int main() {

	// 두 정수값을 입력하세요:10 20
	// 두 정수의 합은  30입니다

	int num1;
	int num2;

	printf("두 정수값을 입력하세요 : ");

	//scanf_s("%d%d", &num1,&num2);
	//scanf_s("%d %d", &num1, &num2);
	//scanf_s("%d", &num1);
	//scanf_s("%d", &num2);    정수를 입력할때 만큼은 입력방식 전부 상관없다.

	printf("두 정수의 합은 %d입니다", num1 + num2);


	return 0;
}