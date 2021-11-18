#include<stdio.h>

int main(void){
    int n, x, min=1000001, max=-1000001;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        if(x<min)   min=x;
        if(x>max)  max=x;
    }
    printf("%d %d",min, max);
    return 0;
}