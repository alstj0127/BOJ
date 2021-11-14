#include <stdio.h>

int main() {
    int n, a, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a < 2) continue;
        else
            for (int j = 2; j <= a; j++) {
                if (a == j) cnt++;
                else if (a % j == 0) break;
            }
    }
    printf("%d", cnt);
    return 0;
}