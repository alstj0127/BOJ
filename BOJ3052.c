#include<stdio.h>

int main(void){
    int num[1001]={0};
    int n, cnt=0;
    for(int i=0; i<10; i++){
        scanf("%d", &n);
        num[n%42]++;
    }
    for(int i=0; i<1001; i++){
        if(num[i]!=0)   cnt++;
    }
    printf("%d", cnt);
    return 0;
}