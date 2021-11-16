#include<stdio.h>

int main(void){
    int i=0;
    char str[100];
    scanf("%s", str);
    do{
        printf("%c", str[i]);
        i++;
        if(i%10==0)  printf("\n"); 
        }while(*(str+i)!='\0');
return 0;
}