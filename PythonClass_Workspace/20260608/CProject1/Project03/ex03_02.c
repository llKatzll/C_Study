#include<stdio.h>

int main()
{
    int anData[4] = { 1,2,3,4 };
    int  i;

    for (i = 0; i < 4; i++)
    {
        printf("%d ", anData[i]); // 1  2  3  4
    }

    // 모든 배열의 이름은 배열의 시작 주소값이다
    // 첫 번째 요소(인덱스가 0번인 요소)의 주소이다
    printf("\n%x  %X", anData, anData); //45affc78  45AFFC78
    printf("\n%x  %X", anData[0], anData);// 1  45AFFC78
    printf("\n%x  %X", anData[0], anData[0]); // 1  1
    printf("\n%x  %X", &anData[0], &anData[1]);// 45affc78  45AFFC7C


    printf("\n%p   %P", anData, anData);
    // 0000007FE1B1FCF8   P

    printf("\n%p   %P", &anData[0], &anData[0]);
    // 0000007FE1B1FCF8   P
    return 0;
}
