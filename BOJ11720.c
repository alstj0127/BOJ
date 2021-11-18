#include<stdio.h>

int main(void){
    int x[100];
    int n, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%1d", &x[i]);
        sum+=x[i];
    }
    printf("%d", sum);
    return 0;
}