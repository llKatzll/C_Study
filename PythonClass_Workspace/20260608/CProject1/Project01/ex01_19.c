#include <stdio.h>

int main() {

	printf("12345678901234567890\n");

	printf("%10c%c\n", 'A', 'B');
	printf("%-10c%c\n", 'A', 'B');

	printf("%10d\n", 2026);
	printf("%010d\n", 2026);

	printf("%+d\n", 128);
	printf("%#x\n", 2026); //16진수,0x7e9
	printf("%x\n", 2026); // 16진수,7ea
	printf("%#010x\n", 0x7d5);
	printf("7e9:%lf\n", 7e9); // 7000000000.000000
	printf("0x7e9:%d\n", 0x7ea); // 2026

	/*
	12345678901234567890
			AB
	A         B
		 2026
	0000002026
	+128
	0x7ea
	7ea
	0x000007d5
	7e9:7000000000.000000
	0x7e9:2026

	*/

	return 0;
}