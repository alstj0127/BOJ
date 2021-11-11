#include <stdio.h>
#include <string.h>

int main() {
    char str[80];
    int n, combo = 0, sum = 0;
    scanf("%d", &n);
    for (int j = 0; j < n; j++) {
        scanf("%s", str);
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == 'O') {
                combo++;
                sum = sum + combo;
            }
            else    combo=0;
        }
        printf("%d\n", sum);
        sum=0;
        combo=0;
    }
    return 0;
}
