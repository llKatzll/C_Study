#include <stdio.h>

int main() {
	
	printf("Start");

	for (int num = 0; num < 20; num++) {

		if (num % 2 == 0 || num % 3 == 0) {
			continue;
		}
		printf("%d", num);
	}

	printf("End\n");

	return 0;
}