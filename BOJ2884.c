#include<stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    if(b>=45)   b-=45;
    else if(b<45){
        if(a==0)    a=24;
        a--;
        b+=15;
    }
    printf("%d %d", a, b);
    return 0;
}