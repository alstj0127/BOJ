#include<stdio.h>
#include<string.h>

int main(void){
    int n, x;
    char str[20];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %s", &x, str);
        for(int j=0; j<strlen(str); j++){
            for(int k=0; k<x; k++){
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
    return 0;
}