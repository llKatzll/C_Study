#include <stdio.h>

int main() {

	//printf("%d\n", 'A'); //65

	//int test = 65;

	//printf("%c", test); //A

	//아스키표
	
	//65 <- 대문자 A부터 순차적 시작
	//97 <- 소문자 a부터 순차적 시작

	//48 <- '문자' '0' 부터 시작

	// ascii 0~127 + extended ascii(128~255) 8bit(1byte)
    // 자료형:문자타입(char) 1byte,문자열(" ")과 다른 개념

	char ch = 'A'; //char 타입, 1바이트.

	printf("%c", 65); //A

	// sizeof() 연산자. 메모리의 크기를 바이트 단위로 계산.

	printf("literal int size : %zd", sizeof(7));
	//왜 zd를 쓰는가? sizeof의 결과 타입은 int가 아니기 때문. 8바이트 짜리 size_t 라는걸 반환하기에 %d를 쓰면 언젠간 꼬리 밟힌다. zd로 처리.



	return 0;
}