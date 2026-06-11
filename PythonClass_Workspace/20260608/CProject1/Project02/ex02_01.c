#include <stdio.h>

int main() {

	/*for (int i = 0; i <= 5; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	/*char a, b, c;

	scanf_s("%c%c%c", &a, 1, &b, 1, &c, 1); //이러면 되네*/

	//먼저 입력된 정수에서 나중에 입력한 정수를 뺌. 해당하지 않으면 "알 수 없는 명령" 이라는 문자열을 출력함

	//char ch = 0;
	//double x = 0, y = 0;

	//scanf_s("%c %lf %lf", &ch,1, &x, &y);

	//switch (ch) {
	//case'm': //m inus
	//	printf("%.2lf\n", x - y);
	//	break;
	//case'p': //plus
	//	printf("%.2lf\n", x + y);
	//	break;
	//case'd': //divide
	//	if (y == 0) printf("0으로 나눌 수 없음\n");
	//	else printf("%.2lf\n", x / y);
	//	break;
	//case'M': //M ultiply
	//	printf("%.2lf\n", x * y);
	//	break;
	//default:
	//	printf("알 수 없는 명령\n");
	//	break;
	//}

	//double a, b, res = 0;
	//char op;

	//printf("두 개의 실수값과 한 개의 연산값을 입력하세요.");

	//scanf_s("%lf %c %lf", &a, &op,1, &b);

	//switch (op) {
	//case'-': //minus
	//	printf("%.2lf\n", a - b);
	//	break;
	//case'+': //plus
	//	printf("%.2lf\n", a + b);
	//	break;
	//case'/': //divide
	//	if (b == 0) printf("0으로 나눌 수 없음\n");
	//	else printf("%.2lf\n", a / b);
	//	break;
	//case'*': //Multiply
	//	printf("%.2lf\n", a * b);
	//	break;
	//default:
	//	printf("알 수 없는 명령\n");
	//	break;
	//}

	int code;
	int amount;

	printf("코드 번호를 입력하세요(1 가정용, 2 산업용, 3 교육용):");
	scanf_s("%d", &code);
	printf("전기 사용량을 입력하세요(kw):");
	scanf_s("%d", &amount);

	switch (code) {
	case 1: //가정용
		printf("\n전기요금 : %.2lf",
			(1130 + (amount * 127.8)) * 1.09);  // base * (1 + 세율)
		break;
	case 2: //산업용
		printf("\n전기요금 : %.2lf",
			(660 + (amount * 88.5)) * 1.08);
		break;
	case 3: //교육용
		printf("\n전기요금 : %.2lf",
			(370 + (amount * 52)) * 1.05);
		break;
	default:
		printf("\n잘못된 코드입니다\n");
		break;
	}

	return 0;
}