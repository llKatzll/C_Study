#include<stdio.h>

int main()
{
    printf("12345678901234567890\n");

    printf("%c\n", 'A');
    printf("%d\n", 128);
    printf("%10c\n", 'A');
    printf("%10d\n", 128);

    printf("%10lf\n", 3.1415926);
    printf("%10le\n", 3.1415926);
    printf("%10.3lf\n", 3.1415926);

    return 0;
}

/*
12345678901234567890
A
128
       A
      128
   3.141593
3.141593e+00
    3.142
*/