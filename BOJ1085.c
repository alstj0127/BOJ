#include<stdio.h>

int main(void){
    int x,y,w,h, tmp=1000;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    if(tmp>x)   tmp=x;
    if(tmp>y)   tmp=y;
    if(tmp>w)   tmp=w;
    if(tmp>h)   tmp=h;
    if(tmp>w-x) tmp=w-x;
    if(tmp>h-y) tmp=h-y;
    printf("%d", tmp);
    return 0;
}