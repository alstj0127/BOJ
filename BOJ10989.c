#include<stdio.h>

int main(void) {
    int n, a;
    int arr[10001] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        arr[a]++;
    }
    for (int i = 0; i < 10001; i++) {
        for (int j = 0; j < arr[i]; j++) printf("%d\n", i);
    }
    return 0;
}