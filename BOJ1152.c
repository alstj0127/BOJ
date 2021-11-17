#include<stdio.h>

int main(void){
    char str[1000000];
    scanf("%[^\n]",str);    //한 줄 한 번에 출력 
    int i=0, cnt=0;
    do{
       if(str[i]==' ') cnt++;
       i++;
    }while(str[i]!='\0');
    if(str[0]==' ') cnt--;
    if(str[i-1]!=' ') cnt++;
    printf("%d", cnt);
    return 0;
}