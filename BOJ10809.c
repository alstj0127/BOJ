#include<stdio.h>
#include<string.h>

int main(void){
    char str[100];
    int alp[26]={-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int check[26]={0};
    scanf("%s", str);
    for(int i=0; i<strlen(str); i++){
        check[str[i]-'a']++;
        if(check[str[i]-'a']==1)  alp[str[i]-'a']=i;
    }
    for(int i=0; i<26;i++){
        printf("%d ", alp[i]);
    }
    return 0;
}