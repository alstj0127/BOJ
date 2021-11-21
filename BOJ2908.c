#include<stdio.h>

int main(void){
    int a, b, tmp1,tmp2;
    scanf("%d %d", &a, &b);
    tmp1=a/100;
    tmp2=a%10;
    a=a%100/10*10;
    a+=tmp1;
    a+=tmp2*100;
    tmp1=b/100;
    tmp2=b%10;
    b=b%100/10*10;
    b+=tmp1;
    b+=tmp2*100;
    if(a>b) printf("%d", a);
    else printf("%d", b);
    
    return 0;
}