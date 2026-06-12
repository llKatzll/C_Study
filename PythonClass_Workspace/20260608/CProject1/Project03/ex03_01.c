#include <stdio.h>

void print_stars(int number);

int main() {
    int num = 0;
    printf("정수 입력");
    scanf_s("%d", &num);
    print_stars(num);
    return 0;
}

void print_stars(int number) {
    for (int i = 0; i < number; i++) {
        printf("*");
    }
}