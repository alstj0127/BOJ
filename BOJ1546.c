#include <stdio.h>

int main() {
    double avg = 0;
    int arr[1000];
    int cnt, n, MAX = -1;
    scanf("%d", &cnt);
    for (int i = 0; i < cnt; i++) {
        scanf("%d", &n);
        arr[i] = n;
        if (MAX < n) MAX = n;
    }
    for (int i = 0; i < cnt; i++)
        avg = avg + (double) arr[i] / MAX * 100;
    printf("%lf", avg / cnt);
}