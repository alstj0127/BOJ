#include<stdio.h>

int main(void){
    int a=1, b=1, c=1, max;
    while(1){
        scanf("%d", &a);
        max=a;
        scanf("%d", &b);
        if(b>max)   max=b;
        scanf("%d", &c);
        if(c>max)   max=c;
        if(a==0&&b==0&&c==0)  return 0;
        else if(max==a){
            if(max*max==b*b+c*c)    printf("right\n");
            else printf("wrong\n");
        }
        else if(max==b){
            if(max*max==a*a+c*c)    printf("right\n");
            else printf("wrong\n");
        }
        else if(max==c){
            if(max*max==a*a+b*b)    printf("right\n");
            else printf("wrong\n");
        }
    }
}