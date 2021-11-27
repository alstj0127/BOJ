#include<stdio.h>

int main(void){
    int n, sum, t;
    scanf("%d", &n);
    for(int i=1; i<=1000000; i++){
        sum=i, t=i;
        while(t){
            sum+=t%10;
            t=t/10;
        }
        if(n==sum){
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
    return 0;
}