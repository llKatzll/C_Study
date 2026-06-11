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

	//int code;
	//int amount;

	//printf("코드 번호를 입력하세요(1 가정용, 2 산업용, 3 교육용):");
	//scanf_s("%d", &code);
	//printf("전기 사용량을 입력하세요(kw):");
	//scanf_s("%d", &amount);

	//switch (code) {
	//case 1: //가정용
	//	printf("\n전기요금 : %.2lf",
	//		(1130 + (amount * 127.8)) * 1.09);  // base * (1 + 세율)
	//	break;
	//case 2: //산업용
	//	printf("\n전기요금 : %.2lf",
	//		(660 + (amount * 88.5)) * 1.08);
	//	break;
	//case 3: //교육용
	//	printf("\n전기요금 : %.2lf",
	//		(370 + (amount * 52)) * 1.05);
	//	break;
	//default:
	//	printf("\n잘못된 코드입니다\n");
	//	break;
	//}

	/*do {
		printf("1~3숫자입력");
		scanf_s("%d", &a);
	} while (a < 1 || a > 3);*/

	

	//while (num < 5) {
	//	printf("%d", num);
	//	num += 3;
	//} //testing

	/*int num=0;while(num<5)if(num>=2){break;}else{printf("%d",num++);};*/

	/*
	while문 사용

	2 * 1 = 2
	2 * 2 = 4
	2 * 3 = 6
	2 * 9 = 18
	*/


	/*int a = 1;
	while (a <= 9) {
		printf("2 * %d = %d\n", a, 2 * a);
		a++;
	}*/

	/*
	 while 사용

	1부터 100까지의 합
	1+2+3+4+......+99+100 (누적:sum=sum+값)

	printf("1부터 100까지의 합:%d\n", sum);
	*/

	/*int sum = 0;
	int i = 1;
	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("%d", sum);*/

	/*int dan;
	int i = 1;*/

	/*printf("한 개의 단을 입력 : ");
	scanf_s("%d", &dan);

	while (i < 10) {
		printf("%d * %d - %d\n", dan, i, dan * i);
		i++;
	}*/

	//for 배웠다고 함

	/*int input;

	scanf_s("%d", &input);

	for (int i = 1; i <= 9; i++) {
		printf("\n%d x %d = %d", input, i, input * i);

		if ((input * i) % 2 == 0) {
			printf(" [짝]");
		}
		else {
			printf(" [홀]");
		}
	}*/

	int n, total = 0;

	scanf_s("%d", &n);

	for (int dan = 1; dan <= n; dan++) {      // 바깥: 1~N단
		for (int i = 1; i <= 9; i++) {        // 안쪽: ×1~×9
			int result = dan * i;
			total += result;                  // 총합 누적

			printf("%d x %d = %d ", dan, i, result);   // 10진수

			// 16진수 직접 변환
			printf("(0x");
			if (result < 16) {
				if (result < 10) printf("%c", '0' + result);
				else             printf("%c", 'A' + result - 10);
			} else {
				int high = result / 16;
				int low  = result % 16;
				if (high < 10) printf("%c", '0' + high);
				else           printf("%c", 'A' + high - 10);
				if (low < 10)  printf("%c", '0' + low);
				else           printf("%c", 'A' + low - 10);
			}
			printf(") ");

			// 짝홀 (삼항)
			printf("%s\n", (result % 2 == 0) ? "[짝]" : "[홀]");
		}
	}
	printf("총합: %d", total);



	 return 0;
}