#include<stdio.h>

int main(void){
    int n, f, ans=0;
    scanf("%d %d", &n, &f);
    n-=n%100;

    while(1){
        if((n+ans)%f==0)    break;
        ans++;
    }
    printf("%02d\n", ans);
    return 0;
}