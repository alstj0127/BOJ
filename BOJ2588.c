#include<stdio.h>

int main(void) {                 //472    385
    int a, b;
    scanf("%d %d", &a, &b);
    int a1 = a / 100, a2 = a % 100 / 10, a3 = a % 10;
    int b1 = b / 100, b2 = b % 100 / 10, b3 = b % 10;
    printf("%d\n%d\n%d\n%d", a1 * b3 * 100 + a2 * b3 * 10 + a3 * b3,
           a1 * b2 * 100 + a2 * b2 * 10 + a3 * b2,
           a1 * b1 * 100 + a2 * b1 * 10 + a3 * b1, a * b);

    return 0;
}