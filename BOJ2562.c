#include <stdio.h>

int main(void){
    int x[9]; 
    int max = 0, cnt=0;
    for(int i=0; i<9; i++){
        scanf("%d", &x[i]);
        if(x[i]>max)   max = x[i];
    }
    int k=0;
    while(1){
        if(x[k]==max) break;
        k++;
    }
    printf("%d %d", max, k+1);
    return 0;
}