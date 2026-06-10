#include <stdio.h>

int main() {

	/*char c;  //A~Z 순환문제.
	int shift;
	scanf_s("%c %d", &c, 1, &shift);

	char result = (c - 'A' + shift) % 26 + 'A';
	printf("%c\n", result);

	return 0;*/



	//정수 하나를 입력받아서, 그 수의 약수를 전부 출력하고, 약수가 2개면 소수라고 판정하기
	/*입력: 7
	출력 :
	약수 : 1 7
	소수입니다

	입력 : 12
	출력 :
	약수 : 1 2 3 4 6 12
	소수가 아닙니다*/

	int num;
	int count = 0;

	scanf_s("%d", &num);

	printf("\n약수 : ");

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			count++;
			printf("%d ", i);
		}
		else {
			continue;
		}
	}

	if (count == 2) {
		printf("\n소수입니다");
	}
	else {
		printf("\n소수가 아닙니다");
	}

}