#include<stdio.h>

int main(void) {
    int tmp, sum = 0;
    int arr[7];
    int arr2[7] = {0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 1) arr2[i] = arr[i];
    }
    for (int i = 0; i < 7; i++) {
        for (int j = i; j < 7; j++) {
            if (arr2[i] > arr2[j]) {
                tmp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = tmp;
            }
        }
    }
    if (sum!=0){
        for (int i = 6; arr2[i] != 0; i--) {
            sum += arr2[i];
        }
        printf("%d\n", sum);
        int check=0;
        for(; arr2[check]==0;check++){}
        printf("%d",arr2[check]);
    } else printf("-1");
    return 0;
}