#include <stdio.h>

int main() {
	
	//sizeof가 반환하는 결과값에 주의해야한다.

	/*
	 char(1byte):-128~127,0~255
	 int(4byte):-2147483648~2147483647  <- 초과시 값이 돌고돈다. -100~100이라 가정할 경우 100을 넘을 경우 다음 수는 -100.
	*/

	//1바이트 == 8비트인데 숫자를 나타낼땐 7비트만 씀. 가장 좌측이 0(양수) 1(음수)를 표현하기 때문.
	//숫자를 표현하는데 4바이트? 32비트로 표현? ㄴㄴ, 31비트로 표현한다. 가장 좌측의 한 비트는 음양수를 정한다.

	//unsigned <- 리미트해제!!!
	/*unsigned int num;*/

	/*int num = 2147483650;

	printf("%d\n", num);*/

	//printf("%d", 45.678); //-1271310320, 깨진값. 타입 미스매치하지마라.
	/*printf("%lf", 45.678);*/

	/*printf("%d", '0'); //48 */

	char ch1 = 'A', ch2 = 65;
	int ch3 = 'z', ch4 = 90;

	printf("%c %d\n", ch1,ch1);
	printf("%c %d\n", ch2, ch2);

	printf("%c %d\n", ch3, ch3);
	printf("%c %d\n", ch4, ch4);
	return 0;
}