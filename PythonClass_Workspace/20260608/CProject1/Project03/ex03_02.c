#include <stdio.h>

int sumfunc(int);
//1부터 n까지

int main() {

	int number;
	int result;

	printf("숫자를 입력하세요(정수)");
	scanf_s("%d", &number); //10

	result = sumfunc(number);

	printf("%d", result);
}

int sumfunc(int num) {

	int res = 0;

	for (int i = 1; i <= num; i++) {
		res += i;
	}

	return res;
}
