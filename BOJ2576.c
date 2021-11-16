#include<stdio.h>

int main(void) {
    int tmp, min = 100, sum = 0;
    for (int i = 0; i < 7; i++) {
        scanf("%d", &tmp);
        if (tmp%2!=0){
            sum+=tmp;
            if(min>tmp) min = tmp;
        }
    }
    if(sum==0){
        printf("-1");
        return 0;
    }
    else    printf("%d\n%d", sum, min);
    return 0;
}