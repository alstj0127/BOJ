#include<stdio.h>
#include<string.h>

int main(void) {
    int n, ans = 0, check;
    int a[26] = {0};
    char str[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {       //0번 방 알파벳의 아스키 코드 값 - 65의 a배열 방 자리 수가 만약 1이 아니면 1넣어, 그리고 1이 이미 있으면 바로 break;
        check = 1;
        scanf("%s", str);
        for (int j = 0; j < strlen(str); j++) {
            if (a[str[j] - 'a'] == 0)   a[str[j] - 'a'] = 1;
            else if (a[str[j] - 'a'] == 1 && str[j - 1] == str[j]);
            else check = 0;
        }
        if (check == 1) ans++;
    }
    printf("%d", ans);
    return 0;
}

