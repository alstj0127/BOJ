#include<stdio.h>

int main(void){
    int a, asc=0, des=0;
    for(int i=1; i<=8; i++){
        scanf("%d", &a);
        if(a==i)    asc++;
        else if(9-a==i) des++;
    }
    if(asc==8)  printf("ascending");
    else if(des==8) printf("descending");
    else printf("mixed");
    return 0;
}