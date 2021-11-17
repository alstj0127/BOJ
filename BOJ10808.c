#include<stdio.h>
int main(void){
    char a[100];
    char alp[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    scanf("%s", a);
    for(int i=0; a[i]!='\0'; i++)  alp[a[i]-'a']++;
    for(int i=0; i<26; i++) printf("%d ", alp[i]);
    return 0;
}