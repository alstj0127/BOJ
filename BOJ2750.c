#include<stdio.h>

int main(void) {
    int n, tmp;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) { 
            if (arr[i] > arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) printf("%d\n", arr[i]);

    return 0;
}