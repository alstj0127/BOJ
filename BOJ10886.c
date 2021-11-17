#include<stdio.h>

int main(void){
    int n, x;
    int check[2]={};
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        scanf("%d", &x);
        check[x==1]++;
    }
    if(check[0]>check[1])   printf("Junhee is not cute!");
    else    printf("Junhee is cute!");
    return 0;
}